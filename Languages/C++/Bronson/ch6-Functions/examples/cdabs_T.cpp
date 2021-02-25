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
void show_cdabs(T x)
{
    if (x < 0)
        x = -x;

   cout << "\nThe absolute value of the number is " << x << endl;     
}  

int main()
{
   auto num = 0.0;

   cout << "\nEnter a number: ";
   cin >> num;
   
   show_cdabs (num);
}

