#include <iostream>


struct Time {
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    unsigned int day;
    unsigned int month;
    unsigned int year;

};

int main() {
    Time meeting = { 16, 48, 13, 24, 12, 2047, };
    std::cout << "Meeting with a plumber will be at " << meeting.hour << ':' <<
        meeting.minute << ':' << meeting.second << " " << meeting.day << '.' <<
        meeting.month << '.' << meeting.year << std::endl;
}