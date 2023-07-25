#include<iostream>
using namespace std;

class Cartesian {
    int x, y;

public:
    Cartesian() {
        x = 10;
        y = 20;
    }

    friend class Addition;
};

class Addition {
    int a, b;

public:
    Addition() {
        a = 5;
        b = 5;
    };

    void total(Cartesian& c) {
        a += c.x;
        b += c.y;
    }

    void sum();
    void diff();
    void product();
    void division();
};

void Addition::product() {
    cout << "The product is " << a * b << endl;
}

void Addition::sum() {
    cout << "The sum is " << a + b << endl;
}

void Addition::diff() {
    cout << "The difference is " << a - b << endl;
}

void Addition::division() {
    cout << "The division is " << a / b << endl;
}

int main() {
    Cartesian c;
    Addition a;
    a.total(c);
    a.sum();
    a.diff();
    a.product();
    a.division();

    return 0;
}
