/*
practice with overloaded constructors
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <algorithm>
#include <chrono>
#include <functional>
using std::cin;
using std::cout;
using std::endl;
using std::mt19937;
using std::mt19937_64;
using std::setw;
using std::string;
namespace sc = std::chrono;

class Date
{
private:
    int month;
    int day;
    int year;

public:
    Date(int = 7, int = 4, int = 2012); //constructor
    Date(long);
    void showDate();
};

Date::Date(int mm, int dd, int yyyy)
{
    month = mm;
    day = dd;
    year = yyyy;
}

Date::Date(long yyyymmdd)
{
    
    year = int(yyyymmdd / 10000.0);                       //extract the year
    month = int((yyyymmdd - year * 10000.0) / 100.00);    //extract the month
    day = int(yyyymmdd - year * 10000.0 - month * 100.0); //extract the day
}

void Date::showDate()
{
    cout << "The date is ";
    cout << std::setfill('0')
         << setw(2) << month << '/'
         << setw(2) << day << '/'
         << setw(2) << year % 100 << endl; //extract last two digits
}

main()
{
    Date a, b(4, 1, 1998), c(20090515L);
    a.showDate();
    b.showDate();
    c.showDate();
}