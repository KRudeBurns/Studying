/*
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main()
{
   cout << "Enter the Loop: " << endl;
   for (int i = 1; i < 6; ++i)
   {
       //floor
       cout << "welcome to floor " << i << endl;

       // rooms on floor
       for (int j = 1; j < 25; j += i)
       {
           cout << "You are in room " << j << " on floor " << i << endl;
       }
   }

   cout << "Thanks for traveling down this building\n";
}