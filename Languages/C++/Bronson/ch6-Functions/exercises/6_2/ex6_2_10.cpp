/*
10. (Program) a. Write a function named ReadOneChar() that reads a key pressed on the keyboard and displays the integer code of the entered character.
b. Include the ReadOneChar() function written for Exercise 10a in a working program. The
main() function should correctly call ReadOneChar() and display the integer the function
returns. Test the function by passing various data to it and verifying the returned value.
*/

int readOneChar(char);

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main()
{
   cout << "The char " << 'a' << " = " << readOneChar('a') << endl;
   cout << "The char " << 'b' << " = " << readOneChar('b') << endl;
   cout << "The char " << 'c' << " = " << readOneChar('c') << endl;
   cout << "The char " << 'd' << " = " << readOneChar('d') << endl;
   cout << "The char " << 'e' << " = " << readOneChar('e') << endl;
   cout << "The char " << 'f' << " = " << readOneChar('f') << endl;
   cout << "The char " << 'g' << " = " << readOneChar('g') << endl;
   cout << "The char " << 'h' << " = " << readOneChar('h') << endl;
   cout << "The char " << '1' << " = " << readOneChar('1') << endl;
   cout << "The char " << '2' << " = " << readOneChar('2') << endl;
   cout << "The char " << '3' << " = " << readOneChar('3') << endl;
   cout << "The char " << '4' << " = " << readOneChar('4') << endl;
   cout << "The char " << '5' << " = " << readOneChar('5') << endl;
   cout << "The char " << '6' << " = " << readOneChar('6') << endl;
   cout << "The char " << '7' << " = " << readOneChar('7') << endl;
}

int readOneChar(char c)
{
    return (int)c;
}