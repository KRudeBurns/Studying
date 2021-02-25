/*
we creat an array of class objects
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

//class declaration section
class Date
{
private:
    int month;
    int day;
    int year;

public:
    Date();  //constructor
    ~Date(); //destructor
    void showDate();
};

//class implementation section
Date::Date() //user-defined default constructor
{
    cout << "*** A Date object is being initializad ***\n";
    month = 1;
    day = 1;
    year = 2015;
}

Date::~Date() //user-defined default destructor
{
    cout << "**** A Date object is going out of existence***\n";
}

void Date::showDate()
{
    cout << "      The date is " << std::setfill('0')
         << setw(2) << month << '/'
         << setw(2) << day << '/'
         << setw(2) << year % 100; //extract the last 2 year digits
}

int main()
{
    const int NUMDATES = 5;
    Date theDate[NUMDATES];

    for (int i = 0; i < NUMDATES; ++i)
    {
        theDate[i].showDate();
        cout << endl;
    }
}