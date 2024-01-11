#include <iostream>
#include <algorithm>
#include<cctype>

template <typename T>
void customSort(T arr[], int size) {
    std::sort(arr, arr + size);
}

// Specijalizacija za niz char-ova
template <>
void customSort<char>(char arr[], int size) {
    std::sort(arr, arr + size, [](char a, char b) {
        return std::tolower(a) < std::tolower(b);
        });
}

int main() {
    // Primjer korištenja generičke funkcije za sortiranje niza
    int intArray[] = { 5, 2, 8, 1, 3 };
    customSort(intArray, 5);

    std::cout << "Sorted int array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    char charArray[] = { 'c', 'A', 'b', 'D', 'a' };
    customSort(charArray, 5);

    std::cout << "Sorted char array (case-insensitive): ";
    for (int i = 0; i < 5; ++i) {
        std::cout << charArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
