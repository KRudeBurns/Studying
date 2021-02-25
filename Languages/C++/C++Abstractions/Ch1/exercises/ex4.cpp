/*
Write a program that reads in a positive integer N and then calculates and
displays the sum of the first N odd integers. For example, if N is 4, your
program should display the value 16, which is 1 + 3 + 5 + 7.
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int n = 0, odd = 0, sum = 0, counter = 1;
   cout << "enter your limit: ";
   
   while (cin >> n)
   {
       
       while (counter <= n)
       {
           cout << "N = " << n << endl;
           cout << "counter " << counter << endl;
           cout << "sum " << sum << endl;
           cout << "odd " << odd << endl;

           if (odd % 2 != 0)
           {
               sum += odd;
               counter++;              
           }
           ++odd;
                      
       }
    cout << "sum of the first " << n << " odds is " << sum << endl;
    //reset
    odd = 1;
    n = sum = counter = 1;   
    
    cout << "enter your limit [~ to end]: ";
    
   }
}