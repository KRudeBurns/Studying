/*
Topic: Inline Functions
Used for functions that are small and called infrequently.
The compiler will place the fuction code at the point where it is called
in the program.
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

inline double tempvert(double inTemp)
{
    return (5.0/9.0) * (inTemp - 32.0);
}

int main()
{
   const int CONVERTS = 4;  //number of conversions to be made
   int count;
   double fahren;

   for (count = 1; count <= CONVERTS; count++)
   {
       cout << "\nEnter a Fahrenheit temperature: ";
       cin >> fahren;
       cout << "The celsious equivalent is "
            << tempvert(fahren) << endl;
   }
}

/*
Each time an inline function is referenced, the complete function code is 
reproduced and stored as an integral part of the program.
A non-inline function, however, is stored in memory only once. 
No matter how many times the function is called, the same code is used.
Therefore, inline functions should be used only for small functions
that aren’t called extensively in a program.
*/