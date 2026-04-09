#include <iostream>
#include <vector>
#include <array>

int main()
{

    std::array<std::array<int, 3>, 2> matrix = {{{1, 2, 3},
                                                 {4, 5, 6}}};
   

    for (size_t i = 0; i < matrix.size(); i++)
    {
        for (size_t j = 0; j < matrix[i].size(); j++)
            std::cout << matrix[i][j] << " ";

        std::cout << std::endl;
    }

    return 0;
}
