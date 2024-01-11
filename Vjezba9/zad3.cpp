#include <iostream>
#include <algorithm>
#include<cctype>

template <typename T>
void customSort(T arr[], int size) {
    std::sort(arr, arr + size);
}

template <>
void customSort<char>(char arr[], int size) {
    std::sort(arr, arr + size, [](char a, char b) {
        return std::tolower(a) < std::tolower(b);
        });
}

int main() {
    int intArray[] = { 5, 2, 8, 1, 3 };
    customSort(intArray, 5);

    std::cout << "Sortirani niz integera: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    char charArray[] = { 'c', 'A', 'b', 'D', 'a' };
    customSort(charArray, 5);

    std::cout << "Sortirani niz charova: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << charArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
