/*
cdabs -> compute and display absolute value
A template function is used
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;


template <class T>
T show_cdabs(T x)
{
   T absnum; 
    if (x < 0)
        absnum = -x;
    else
        absnum = x;

   return absnum;   
}  

int main()
{
   auto num = 0.0;

   cout << "\nEnter a number: ";
   cin >> num;
   
   show_cdabs (num);
   cout << "The absolute value of " << num << " is " << show_cdabs(num) << endl;
}

