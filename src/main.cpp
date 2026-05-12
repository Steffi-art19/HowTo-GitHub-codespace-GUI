#include <iostream>
#include <vector>
#include <string>

class User {
private:
    std::string name;
    int age;
    std::string street;

public:
    User(const std::string& name, int age, const std::string& street)
        : name(name), age(age), street(street)
    {
    }

    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getStreet() const {
        return street;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void print() const {
        std::cout << "Name: " << name
                  << ", age: " << age
                  << ", street: " << street << '\n';
    }
};

class UserList {
private:
    std::vector<User> users;

public:
    void addUser(const User& user) {
        users.push_back(user);
    }

    void printAll() const {
        for (const auto& user : users) {
            user.print();
        }
    }

    double averageAge() const {
        if (users.empty()) {
            return 0.0;
        }

        int sum = 0;
        for (const auto& user : users) {
            sum += user.getAge();
        }

        return static_cast<double>(sum) / users.size();
    }

    void setAllAges(int newAge) {
        for (auto& user : users) {
            user.setAge(newAge);
        }
    }
};

int main() {
    UserList list;

    list.addUser(User("Alice", 20, "Květová 9"));
    list.addUser(User("Bob", 25, "Javorová 12"));
    list.addUser(User("Charlie", 30, "Lipová 3"));

    std::cout << "Puvodni uzivatele:\n";
    list.printAll();

    std::cout << "Prumerny vek: " << list.averageAge() << '\n';

    int newAge;
    std::cout << "Zadej novy vek pro vsechny uzivatele: ";
    std::cin >> newAge;

    list.setAllAges(newAge);

    std::cout << "Uzivatele po zmene veku:\n";
    list.printAll();

    return 0;
}
