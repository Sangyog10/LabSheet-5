#include<iostream>
using namespace std;

class Compare {
    int x;

public:
    Compare() : x(0) {}
    Compare(int a) : x(a) {}

    bool operator==(const Compare& c) const {
        return (x == c.x);
    }

    bool operator>(const Compare& c) const {
        return (x > c.x);
    }

    bool operator<(const Compare& c) const {
        return (x < c.x);
    }

    bool operator>=(const Compare& c) const {
        return (x >= c.x);
    }

    bool operator<=(const Compare& c) const {
        return (x <= c.x);
    }
};

int main() {
    Compare c1(1);
    Compare c2(2);

    if (c1 == c2) {
        cout << "Equal" << endl;
    }
    else if (c1 > c2) {
        cout << "c1 is greater" << endl;
    }
    else if (c1 < c2) {
        cout << "c2 is greater" << endl;
    }
    else if (c1 >= c2) {
        cout << "c1 is greater or equal" << endl;
    }
    else if (c1 <= c2) {
        cout << "c2 is greater or equal" << endl;
    }

    return 0;
}
