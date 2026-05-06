#include <iostream>
#include <string>
using namespace std;

long long faktorial(int n) {
    if (n < 0) {
        return -1; // chyba: faktoriál není definován pro záporná čísla
    }
    
    long long vysledek = 1;
    for (int i = 2; i <= n; i++) {
        vysledek *= i;
    }
    return vysledek;
}

int main()
{
    cout << "Faktoriál 5: " << faktorial(5) << endl;  // 120
    cout << "Faktoriál 10: " << faktorial(10) << endl; // 3628800
    cout << "Faktoriál 0: " << faktorial(0) << endl;   // 1

    return 0;
}
