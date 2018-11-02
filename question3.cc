// Question 3
#include <vector>
#include <iostream>
#include <functional>

/**
 * Effect: applies the function f to each element in vec
 * replaces the old value in vec with the new one
 * @param vec the vector to operate on
 * @param f the function to apply
 * @tparam T the type of elements in the vector
 */
template <typename T>
void map(std::vector<T>& vec, T (*f) (T)) {
    for (unsigned int i = 0; i < vec.size(); i++) {
        vec[i] = (*f)(vec[i]);
    }
}

template <typename T>
void map2(std::vector<T>& vec, std::function<T (T)> f) {
    for (unsigned int i = 0; i < vec.size(); i++) {
        vec[i] = f(vec[i]);
    }
}

int triple(int x) {
    return x*3;
}

int main() {
    std::vector<int> vec = {1, 2, 3};
    map<int>(vec, triple);
    for (const auto& i:vec) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
    map2<int>(vec, [](int x) {return x * 3;});
    for (const auto& i:vec) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}
