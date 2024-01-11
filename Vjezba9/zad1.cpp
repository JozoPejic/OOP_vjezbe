#include <iostream>
#include <string>

template<class T>
T min(T a, T b) {
    return (a < b) ? a : b;
}




int main() {
    int num1 = 2, num2 = 11;
    std::cout << "Manji broj je:  " << min(num1, num2) << std::endl;

    std::string str1 = "ananas", str2 = "naranca";
    std::cout << "Manji string je: " << min(str1, str2) << std::endl;

    return 0;
}