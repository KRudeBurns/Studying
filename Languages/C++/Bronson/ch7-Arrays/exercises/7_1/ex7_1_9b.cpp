/*
9. (Program) Write, compile, and run a C++ program that creates an array of five integer numbers and displays these numbers in reverse order.
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int MAXSIZE = 0;
   cout << "Enter the size of your array: ";
   cin >> MAXSIZE;
   cout << "Max Size = " << MAXSIZE << endl;

   double arr[MAXSIZE] = {0};

   for (int i = 0; i < MAXSIZE; ++i)
   {
       cout << "Enter a number (whole or decimal): ";
       cin >> arr[i];    
   }

   cout << " Your nums in reverse: ";
   for (int i = MAXSIZE-1; i >= 0; --i)
   {       
       cout << arr[i] << " ";    
   }


}