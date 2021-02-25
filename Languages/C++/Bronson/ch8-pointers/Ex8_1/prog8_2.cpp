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
   int num = 22;
   int * addr = &num;  //pointer to an address that holds an int.
   int* * pAddr = &addr; //ponter to an address that holds a pointer

   cout << "The value stored in num is " << num << endl;
   cout << "The address of num = " << addr << endl;
   cout << "The address of addr = " << pAddr << endl << endl;

   //another experiment on using references
   //see note 1.
   char myChar = 'X';
   char * pntChar = &myChar;
   cout << "The chracter's value is = " << myChar << endl;  
   cout << "address of the character is = " << pntChar << endl;
   cout << "Value pointed at by pntChar is " << *pntChar << endl << endl;
   
   
  //another example using char ptrs. 
  //works with error. 
  //see Note 2.
  char * pntChar2 = "a";
  cout << pntChar2 << endl << endl;

  string myString = "A new string";
  string * pntStr = &myString;
  cout << "The chracter's value is = " << myString << endl;  
  cout << "address of the character is = " << pntStr << endl;
  cout << "Value pointed at by pntChar is " << *pntStr << endl << endl;


  char * pntChar3 = &myChar; //mychar = X from above.
  *(pntChar3+1) = 'c';
  myString = *pntChar3;
  cout << myString;  //should print Xc.

}

  /*
   Note 1:
   The address of a character is actually the character followed by an a.
   Different compilers will display this differently.  
  */

 /*
   Note 2:
   The program prints the value, but gives the warning: 
   ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings] 
   [duplicate]

   According to stack overflow
   It used to be well-formed - but deprecated - to pass a string literal as char* 
   prior to C++11.

   */
