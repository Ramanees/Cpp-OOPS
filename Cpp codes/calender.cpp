#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void print_month_calendar(int year, int month) {
    int days_in_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[1] = 29;
    }
    tm first_day = {};
    first_day.tm_year = year - 1900;
    first_day.tm_mon = month - 1;
    first_day.tm_mday = 1;
    mktime(&first_day);
    int start_day = first_day.tm_wday;
    cout << "Here is the calendar:" << endl;
    cout << setw(20) << setfill(' ') << right << " " << month << " " << year << endl;
    cout << "Mo Tu We Th Fr Sa Su" << endl;
    for (int i = 0; i < start_day; ++i) {
        cout << "   ";
    }
    for (int day = 1; day <= days_in_month[month - 1]; ++day) {
        cout << setw(2) << day << " ";
        if ((day + start_day) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}
int main() {
    int year, month;
    year = 2020;
    month = 5;
    print_month_calendar(year, month);
    return 0;
}