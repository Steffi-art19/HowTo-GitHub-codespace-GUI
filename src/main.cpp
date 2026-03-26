#include <iostream>
#include <string>

int main()
{
    std::cout << "Zadejte svuj vek: ";

    std::string input;
    std::cin >> input;

    std::string output;
    output = "Je ti " + input + " let.";

    std::cout << output << std::endl;

    std::cout << "Zacina druhy program" << std::endl;

    std::cout << "Zadejte cislo: ";
    float a;
    std::cin >> a;

    float b = a * a;
    std::cout << "Druha mocnina cisla " << a << " je " << b << std::endl;

    return 0;
}
