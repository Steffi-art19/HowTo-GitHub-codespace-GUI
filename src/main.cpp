#include <iostream>
#include <vector>

std::vector<double> multiplyMatrixVector(
        const std::vector<std::vector<double>>& matrix,
        const std::vector<double>& vec)
{
    if (matrix.empty() || matrix[0].empty())
        return {};

    size_t cols = matrix[0].size();

    if (cols != vec.size())
        return {};

    std::vector<double> result(matrix.size(), 0.0);

    for (size_t i = 0; i < matrix.size(); ++i) {
        if (matrix[i].size() != cols)
            return {};

        for (size_t j = 0; j < cols; ++j) {
            result[i] += matrix[i][j] * vec[j];
        }
    }

    return result;
}

int main() {
    std::vector<std::vector<double>> matrix = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0}
    };

    std::vector<double> vec = {1.0, 1.0, 1.0};

    std::vector<double> result = multiplyMatrixVector(matrix, vec);

    if (result.empty()) {
        std::cout << "Chyba: neplatne rozmery matice nebo vektoru.\n";
        return 1;
    }

    std::cout << "Vysledek: ";
    for (double x : result) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}
