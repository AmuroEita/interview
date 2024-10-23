#include <iostream>

class Father {
public:
    Father() {
        std::cout << "Father constructor called" << std::endl;
    }

    ~Father() {
        std::cout << "Father destructor called" << std::endl;
    }
};

class Son : public Father {
public:
    Son() {
        std::cout << "Son constructor called" << std::endl;
    }

    ~Son() {
        std::cout << "Son destructor called" << std::endl;
    }
};

int main() {
    Son d;
    return 0;
}
