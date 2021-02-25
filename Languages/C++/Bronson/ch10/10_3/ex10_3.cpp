/*
3. (Modify) Modify Program 10.3 so that the only data member of the class is a long 
integer named yyyymmdd. Do this by substituting the declaration long yyyymmdd; for 
these existing declarations:
int month;
int day;
int year;

Using the same constructor prototypes currently declared in the class declaration 
section, rewrite them so that the Date(long) method becomes the default constructor, and the

Date(int, int, int) method converts a month, day, and year into the correct form for 
the class data members.
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
    long yyyymmdd;

public:
    Date(long = 20120704); // default
    Date(int, int, int);
    void showDate();
};

Date::Date(long fullDate)
{
    yyyymmdd = fullDate;
}

Date::Date(int mm, int dd, int yyyy)
{
    yyyymmdd = (yyyy * 10000) + (mm * 100) + (dd);
}

void Date::showDate()
{
    cout << "The date is ";
    cout << std::setfill('0')
         << setw(2) << yyyymmdd
         << endl;
}

main()
{
    Date a, b(4, 1, 1998), c(20090515L);
    a.showDate();
    b.showDate();
    c.showDate();

    Date d, e(12, 31, 2013), f(19990618);
    d.showDate();
    e.showDate();
    f.showDate();
}