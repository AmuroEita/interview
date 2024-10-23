#include <iostream>

class Counter {
public:
    static int object_count;
    int count2 = 0;

    Counter() {
        ++object_count;
        ++count2;
    }

    static int get_count() {
        return object_count;
    }

    static int get_count2() {
        return count2;
    }
};

int Counter::object_count = 0;

int main() {
    Counter c1;
    Counter c2;

    std::cout << "Objects created: " << Counter::get_count() << std::endl;
    std::cout << "Objects created: " << c1.get_count2() << std::endl;

    return 0;
}
