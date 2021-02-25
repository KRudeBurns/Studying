/*
(Program) a. A professor has constructed a 3-by-5 two-dimensional array of grades.
This array contains the test grades of students in the professor’s advanced compiler
design class. 

Write, compile, and run a C++ program that reads 15 array values and then determines 
the total number of grades in these ranges: less than 60, greater than or equal to 60 
and less than 70, greater than or equal to 70 and less than 80, greater than or equal 
to 80 and less than 90, and greater than or equal to 90.
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

int main()
{
    //Random number generator
    //seed for random number
    auto seed = sc::high_resolution_clock::now().time_since_epoch().count();

    //generator for grades between 1 and 100
    auto rand_grades = std::bind(std::uniform_real_distribution<double>(1, 100),
                                 mt19937(seed));

    //set up comparisons for sorting grades
    int less_60 = 0, less_70 = 0, less_80 = 0, less_90 = 0, less_100 = 0;
    //create array
    double grades[3][5];
    //set up array and do the sorts
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            grades[i][j] = rand_grades();

            if (grades[i][j] < 60)
            {
                ++less_60;
            }
            else if (grades[i][j] < 70)
            {
                ++less_70;
            }
            else if (grades[i][j] < 80)
            {
                ++less_80;
            }
            else if (grades[i][j] < 90)
            {
                ++less_90;
            }
            else
            {
                ++less_100;
            }

            //print the array for reference
            cout << grades[i][j] << " ";
        }
    }

    //print the count
    cout << "\n\nHere is the grade breakdown: \n"
         << "Less than 100 = " << less_100 << "\n"
         << "Less than 90 = " << less_90 << "\n"
         << "Less than 80 = " << less_80 << "\n"
         << "Less than 70 = " << less_70 << "\n"
         << "Less than 60 = " << less_60 << "\n";
}