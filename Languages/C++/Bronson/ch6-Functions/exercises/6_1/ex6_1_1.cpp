/*
1. (Modify) Rewrite Program 6.4 so that the findMax() function accepts
 two double-precision arguments and returns a double-precision value to main().
 
 Make sure to modify main() to pass two double-precision values to findMax()
 and to accept and store the double-precision value returned by findMax().


ref: program 6.4 below

------------------------------------
#include <iostream>
using namespaceƒstd;
int findMax(int,int); //the functionƒprototype

int main()
{
    int firstnum, secnum, max;
    cout << "\nEnter a number: ";
    cin >> firstnum;
    cout << "Great! Please enter a second number: ";
    cin >> secnum;

    max = findMax(firstnum, secnum);
    cout << "\nThe maximum of the two numbers is " << max << endl;
}
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

double findMax(double,double); //the functionƒprototype

int main()
{
    double firstnum, secnum, max;
    cout << "\nEnter a number: ";
    cin >> firstnum;
    cout << "Great! Please enter a second number: ";
    cin >> secnum;

    max = findMax(firstnum, secnum);
    cout << "\nThe maximum of the two numbers is " << max << endl;
}

double findMax (double x, double y)
{
    return (x > y) ? x : y;
}
