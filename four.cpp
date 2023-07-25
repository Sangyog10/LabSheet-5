#include <iostream>

class Date {
    int day, month, year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    Date& operator++() {
        day++;
        if (day > getDaysInMonth()) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
        return *this;
    }

    Date operator++(int) {
        Date temp(*this);
        ++(*this);
        return temp;
    }

    int getDaysInMonth() const {
        static const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int days = daysInMonth[month];
        if (month == 2 && isLeapYear())
            days++;
        return days;
    }

    bool isLeapYear() const {
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    }

    void print() const {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
    Date date(28, 2, 2023);
    date.print();

    ++date; 
    date.print();

    date++; 
    date.print();

    return 0;
}
