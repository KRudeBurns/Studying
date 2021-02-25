/* 
Euclid outlines a procedure for finding the greatest common divisor (or gcd for short)
of two integers x and y,which is defined to be the largest integer that divides 
evenly into both.  For example, the gcd of 49 and 35 is 7, the gcd of 6 and 18 is 6, 
and the gcd of 32 and 33 is 1

In modern English, Euclid’s algorithm can be described as follows:
   1. Divide x by y and compute the r; call that r r.
   2. If r is zero, the algorithm is complete, and the answer is y.
   3. If r is not zero, set x to the old value of y, set y equal to r, and repeat the process.
 */

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int x = 0, y = 0, r = 0, gcd = 0;
    // for printing purposes:
    int orig_x = 0, orig_y = 0;

    //get the values for x and y
    cout << "Enter 2 numbers to get the greatest commond divisor: ";
    while (cin >> x >> y)
    {
        if (x == 0 || y == 0)
        {
            cout << "Only non zero values allowed\n";
            break;
        }
        else
        {
            orig_x = x, orig_y = y;
            while (y != 0)
            {
                // 1. Divide x by y and compute the remainder; call that remainder r.
                r = x % y;
                //2. If r is zero, the algorithm is complete, and the answer is y.
                if (r == 0)
                {
                    cout << "Your values are now " << " x = " << x << " y = " << y 
                         << " and r = " << r << endl;
                    gcd = y;
                    break;
                }
                /* 3. If r is not zero, 
           - set x to the old value of y, 
           - set y equal to r, 
           - and repeat the process.
        */
                else
                {
                    x = y;
                    y = r;
                    gcd = y;
                    cout << "Your values are now " << " x = " << x << " y = " << y 
                         << " and r = " << r << endl;
                }
            }
        }

        cout << "gcd of " << orig_x << " and " << orig_y << " = " << gcd << endl;
        cout << "Enter 2 numbers to get the greatest commond divisor: ";
    }
}