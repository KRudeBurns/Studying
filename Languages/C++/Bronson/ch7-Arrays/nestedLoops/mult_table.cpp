/*
nested loops for mult table
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
   //mult table
   cout << "Multiplication Table" << endl;

   for (int i = 1; i <= 12; ++i)
   {
       cout << "You have entered the " << i << " times table\n";
       for (int j = 2; j <= 12; ++j)
       {
           cout << i << " x " << j << " = \t" <<  i * j << endl;
       }
   }
}