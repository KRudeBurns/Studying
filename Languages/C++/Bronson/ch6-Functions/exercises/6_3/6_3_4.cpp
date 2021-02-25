/*
4. (Program) a. Write a function named change() that has an integer parameter 
and six integer reference parameters named hundreds, fifties, twenties, tens, fives,
and ones. The function is to consider the passed integer value as a dollar 
amount and convert the value into the fewest number of equivalent bills. Using the 
reference parameters, the function should alter the arguments in the calling 
function. 

b. Include the function written in Exercise 4a in a working program. 
Make sure your function is called from main() and returns a value to main() 
correctly. Have main() use a cout statement to display the returned value.
Test the function by passing various data to it and verifying the returned value.
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

int change(int, int&, int&, int&, int&, int&, int&);

int main()
{
    int amt, hun, fif, twnt, tens, fives, ones;
    cout << "Enter an amount for reduction: ";
    cin >> amt;

    change(amt, hun, fif, twnt, tens, fives, ones);
    
    cout<<hun<<" hundreds"<<endl ;
    cout<<fif<<" fifties"<<endl;
    cout<<twnt<<" twenties"<<endl;
    cout<<tens<<" tens"<<endl;
    cout<<fives<<" fives"<<endl;
    cout<<ones<<" ones"<<endl;
    cout << "Your total amount entered " << amt << endl;
}

int change(int xAmt, int& hundreds, int& fifties, int& twenties, int& tens, int& fives, int& ones)
{
    cout << "Your total amount entered " << xAmt << endl;
    hundreds = xAmt/100;
    //xAmt = xAmt % 100;
    fifties = (xAmt%100) / 50;
    //xAmt = xAmt % 50;
    twenties = ((xAmt%100)%50) / 20;
    //xAmt = xAmt % 20;
    tens = (((xAmt%100)%50)%20) / 10;
    //xAmt = xAmt % 10;
    fives = ((((xAmt%100)%50)%20)%10) / 5; 
    ones = xAmt = ((((xAmt%100)%50)%20)%10) % 5;    
}
