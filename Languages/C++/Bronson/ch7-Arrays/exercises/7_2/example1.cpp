/*
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

int main()
{
   string jars[] = {"String", " James", " Roger"};
   char ropes[] = " is a cat";
   cout << jars[0] + jars[1] + jars[2] + ropes[1]<< endl;
   cout << jars;
}