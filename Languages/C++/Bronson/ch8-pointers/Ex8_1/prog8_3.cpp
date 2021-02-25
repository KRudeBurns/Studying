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
    //notice how I declare the pointer variable
   int dist = 158, miles = 22, * numAddr = &miles;

   cout << "\n\nAddress stored in numAddr is " << numAddr << "\n";
   cout << "Value pointed to by numAddr is " << *numAddr << "\n\n";

   //change value numAddr is pointing too.
   numAddr = &dist;

   cout << "Address stored in numAddr is " << numAddr << "\n";
   cout << "Value pointed to by numAddr is " << *numAddr << "\n\n";

   //
   long * pt;
   long b; int c = 12; 
   pt = c; 
   cout << pt << " | " << *pt << endl;


}