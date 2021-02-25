/*
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;


void findMax(int, int);        // the function prototype

int main()
{
   int firstNum, secNum;

   cout << "\nEnter a number: ";
   cin >> firstNum;
   cout << "Enter a second number: ";
   cin >> secNum;

   findMax(firstNum, secNum);
}

void findMax(int x, int y)
{
    int maxnum;
    if (x >= y)
    {
       maxnum = x;
    }
    else
    {
        maxnum = y;
    }
    
    cout << "\nThe maximum of the two numbers is "
         << maxnum << endl;
}