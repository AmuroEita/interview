#include <unordered_map>
#include <functional>

class MyClass {
public:
    int x;
    int y;
};

int main() {
    std::unordered_map<MyClass, int> my_map;
    MyClass key{1, 2};
    my_map[key] = 10;
}


