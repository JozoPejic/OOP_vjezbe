#include <iostream>
#include <cmath>

template <typename T>
class point {
private:
    T x, y;

public:
    point(T x, T y) : x(x), y(y) {}

    T operator-(const point& other) const {
        T deltaX = x - other.x;
        T deltaY = y - other.y;
        return std::sqrt(deltaX * deltaX + deltaY * deltaY);
    }

    friend std::ostream& operator<<(std::ostream& os, const point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

int main() {
    point<int> p1(2, 3), p2(3, 4);

    std::cout << "Udaljenost tocaka " << p1 << " i " << p2 << " je " << p1 - p2 << std::endl;

    return 0;
}
