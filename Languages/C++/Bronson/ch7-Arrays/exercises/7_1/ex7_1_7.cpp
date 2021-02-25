/*
7. (Program) Write, compile, and run a C++ program to input eight integer numbers into an array named grade. 
As each number is input, add the numbers to a total. 
After all numbers are input, display the numbers and their average.
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
   const int SIZEARRAY = 8;
   int grade[SIZEARRAY] = {0};
   int total = 0;

   for (int i = 0; i < SIZEARRAY; ++i)
   {
       cout << "Enter a grade > ";
       cin >> grade[i];
       total += grade[i];
   }

   cout << "You entered the following grades: \n";
   for(int i = 0; i < SIZEARRAY; i += 4)
   {
       cout << grade[i] << "\t" << grade[i+1] << "\t" << grade[i+2] 
            << "\t" << grade[i+3] << endl;
       
   }

   cout <<" Your total sums = " << total << endl;
   cout << "Average grade = " << total/SIZEARRAY << endl;


}