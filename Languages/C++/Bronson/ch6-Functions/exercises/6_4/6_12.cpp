/*
example using the scope operator
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;

double number = 31.22;      //global var

int main()
{
   double number = 21.32;   //local var

   cout << "The value of the local number is " << number << endl;

   cout << "The value of the global number is " << ::number << endl;
}