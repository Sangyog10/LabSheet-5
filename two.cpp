#include <iostream>
using namespace std;

class ThreeD {
    int x, y, z;

public:
    ThreeD() : x(0), y(0), z(0) {}
    ThreeD(int x, int y, int z) : x(x), y(y), z(z) {}

    friend ThreeD operator+(const ThreeD& d1, const ThreeD& d2);
    friend ThreeD operator-(const ThreeD& d1, const ThreeD& d2);

    void print() {
        cout  << x << ", " << y << ", " << z <<endl;
    }
};

ThreeD operator+(const ThreeD& d1, const ThreeD& d2) {
    ThreeD sum;
    sum.x = d1.x + d2.x;
    sum.y = d1.y + d2.y;
    sum.z = d1.z + d2.z;
    return sum;
}

ThreeD operator-(const ThreeD& d1, const ThreeD& d2) {
    ThreeD diff;
    diff.x = d1.x - d2.x;
    diff.y = d1.y - d2.y;
    diff.z = d1.z - d2.z;
    return diff;
}

int main() {
    ThreeD d1(1, 2, 3);
    ThreeD d2(4, 5, 6);
    ThreeD sum = d1 + d2;
    ThreeD diff = d1 - d2;
    sum.print();
    diff.print();

    return 0;
}
