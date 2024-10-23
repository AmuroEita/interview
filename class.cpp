#include <iostream>

class Father {
public:
    virtual void show() {
        std::cout << "Father class" << std::endl;
    }
};

class Son : public Father {
public:
    void show() override {
        std::cout << "Son class" << std::endl;
    }
};

int main() {
    Father* b = new Son();
    b->show();  // 输出什么？
    delete b;
}
