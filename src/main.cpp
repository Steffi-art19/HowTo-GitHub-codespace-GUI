#include <iostream>
#include <string>

int main()
{
    std::cout << "Vitejte v kalkulacce" << std::endl;
    std::cout << "Zadejte prvni cislo: ";
    float a;
    std::cin >> a;

    float square = a * a;
    std::cout << "Druha mocnina cisla " << a << " je " << square << std::endl;

    std::cout << "Zacina treti program" << std::endl;

    double radius;
    std::cout << "Zadejte polomer: ";
    std::cin >> radius;
    const double pi = 3.1415;
    double circumference = 2 * pi * radius;
    double area = pi * radius * radius;
    std::cout << "Obvod kruhu je " << circumference << " cm a jeho obsah je " << area << " cm2." << std::endl;
    
    return 0;
}