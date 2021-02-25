/*
Write a program that reads in a list of integers from the user until the user
enters the value 0 as a sentinel. 

When the sentinel appears, your program should display the largest value in the list
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
   long long sentinel = 0, largest = 0;
   cout << "Enter your sentinel. [ 0 terminates activity ]: ";

   while (cin >> sentinel && sentinel != 0)
   {
       if (sentinel > largest)
           largest = sentinel;       
       cout << " > ";
   }
   cout << "Your Largest entry: " << largest;
}