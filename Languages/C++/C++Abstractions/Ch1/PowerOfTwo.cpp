/*
*  File: PowerOfTwo.cpp
*  Generates a list of the powers of two
*  up to an exponent limit entered by the user
*/

#include <iostream>
#include <string>
using std::string;
//using std::string_literals;
using std::cout;
using std::cin;
using std::endl;

/* Function prototypes */
unsigned long long raiseToPower (int n, int k);

/* Main Program */
int main()
{
    
    int base = 0, limit = 0;    
    cout << "This program lists powers of your base" << endl;
    cout << "Enter your base number and your Enter your exponent limit: ";
    cin >> base >> limit;

    for (int i = 0; i <= limit; i++)
    {
        cout << base << " raised to the power " << i << " = "
             << raiseToPower(base, i) << endl;
    }

}

/* Function definition:
* Usage: int p = raiseToPower(n, k);
* --------------------------------------------------------------
* This function returs the integer n raised to the kth power
*/

unsigned long long raiseToPower(int n, int k)
{
    unsigned long long result = 1;
    for (int i = 0; i < k; i++)
    {
        result *= n;
    }
    return result;
}