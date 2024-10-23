#include <iostream>

// 64位系统
int main() {
    // 1.
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;

    // 2.
    int arr[10];
    int* ptr = arr;
 
    std::cout << "Size of array: " << sizeof(arr) << " bytes" << std::endl;  
    std::cout << "Size of pointer: " << sizeof(ptr) << " bytes" << std::endl;  

    // 3.
    class A {
    public:
      int a;
      virtual void foo() {}  

      A() : a(0) {}
    };

    std::cout << "Size of A: " << sizeof(A) << " bytes" << std::endl;

    // 4.
    class B {

    };

    std::cout << "Size of B: " << sizeof(B) << " bytes" << std::endl;

    return 0;
}
