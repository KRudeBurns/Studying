/*
6. (Program) a. Write, compile, and run a C++ program that has a 
declaration in main() to store 
the string “Vacation is near” in an array named message. There should be 
a function call to display() that accepts message in a parameter named 
strng and then displays the message.

b. Modify the display() function written in Exercise 6a to display the 
first eight elements of the message array.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <algorithm>
#include <chrono>
#include <functional>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::mt19937_64;
using std::mt19937;
namespace sc = std::chrono; 

void display(string[], int);

int main()
{
   string msg[] = {"Vacation is near"};
   const int SIZE = sizeof(msg)/sizeof(string);
   display(msg, SIZE);   
}

void display(string message[], int sz)
{
    for (int i = 0; i < sz; ++i)
      cout << message[i] ;
    
    cout << endl;
}