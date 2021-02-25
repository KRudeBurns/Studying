/*
a. Write a declaration to store the string “This is a sample” in an array named
samtest. Include the declaration in a program that displays the values in samtest by 
using a for loop that uses a pointer access to each element in the array.

b. Modify the program written in Exercise 4a to display only array elements 10 through 15 (the letters s, a, m, p, l, and e).
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <algorithm>
#include <chrono>
#include <functional>
using std::cin;
using std::cout;
using std::endl;
using std::mt19937;
using std::mt19937_64;
using std::setw;
using std::string;
namespace sc = std::chrono;

int main()
{
    
    string samTest = {"This is a sample"};
    char *strPtr = &samTest[0];
    int size = samTest.size();
    
    for (int i = 0; i < size; ++i)
    {
        cout << *(strPtr + i);
    }

    //part b
    for (int i = 10; i < 15; ++i)
    {
        cout << *(strPtr + i);
    }
}


/* 
This was a very poorly written question. First of all, there were no 
examples letting us know that strings are collections of characters. 
I just had to figure out myself??? what a bad question/

Second with a string, using sizeof(string) was giving me the size 24. 
I dont know why. I ended up using samTest.size().

Using the <string> library helped. 
*/