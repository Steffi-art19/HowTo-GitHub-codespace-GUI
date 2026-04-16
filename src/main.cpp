#include <iostream>

void sayHi(); // deklarace

int main()
{
    sayHi(); // OK
  
    return 0;
}

void sayHi() // definice
{
    std::cout << "Hi!" << std::endl;
}
