/*
cdabs -> compute and display absolute value
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;


void cdabs(int);        // the function prototype
void cdabs(float);
void cdabs(double);

int main()
{
   auto num = 0.0;

   cout << "\nEnter a number: ";
   cin >> num;
   
   cdabs (num);
}

void cdabs(int x)
{     
    if (x < 0)
    {
       x = -x;
    }
        
    cout << "\nThe absolute value of the integer is " << x << endl;
}

void cdabs(float x)
{     
    if (x < 0)
    {
       x = -x;
    }
        
    cout << "\nThe absolute value of the float is " << x << endl;
}

void cdabs(double x)
{     
    if (x < 0)
    {
       x = -x;
    }
        
    cout << "\nThe absolute value of the double is " << x << endl;
}