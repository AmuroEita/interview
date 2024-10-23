#include <iostream>
#include <vector>

int main() {
    std::vector<int> my_vector;

    my_vector[0] = 10;  

    for (size_t i = 0; i < my_vector.size(); ++i) {
      if (i % 2 == 0) {
        my_vector.push_back(i);  
      }
    }

    return 0;
}
