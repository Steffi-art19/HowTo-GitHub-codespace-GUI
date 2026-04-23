#include <iostream>
#include <string>

class User
{
public:
    User(const std::string& name, int age, const std::string& street)
        : name_(name), age_(age), street_(street)
    {
    }

    void printUser() const
    {
        std::cout << "Name: " << name_ << std::endl;
        std::cout << "Age: " << age_ << std::endl;
        std::cout << "Street: " << street_ << std::endl << std::endl;
    }

private:
    std::string name_;
    int age_;
    std::string street_;
};

int main()
{
    User user1("Tomas Marny", 33, "Sikma 5");
    User user2("Josef Novy", 28, "Ve Svahu 8");

    user1.printUser();
    user2.printUser();

    return 0;
}
