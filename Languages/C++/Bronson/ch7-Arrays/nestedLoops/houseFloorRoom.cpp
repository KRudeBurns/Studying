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
   cout << "In this program I will demonstrate using 2 nested loops\n";

   int i = 0, j = 0, k = 0, b = 0;

   for (i = 0; i < 16; ++i)
   {
       cout << "You are in building " << i + 1<< endl;
       
       for (j = 0; j < 1+(i/2); ++j)
       {
           cout << "You are on floor " << j+1 << endl;

           /* for (k = 0; k < j*4; ++k)
           {
               cout << "You are in suite " << k << endl;

               for (b = 0; b < i/4; ++b)
               {
                   cout << "Your room has " << b << "doors and windows" << endl;
               }
           } */
       } 
   }

   cout << "Today you visited: " << i << " buildings, "
        << j << " floors, " << endl;
   cout << "You entered " << k << " suites" << endl;
   cout << "You saw a total of " << b << " doors and windows" << endl;
}