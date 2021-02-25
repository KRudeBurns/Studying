/*
A sequence of numbers formed by repeatedly 
executing the following rules for some positive integer n:
• If n is equal to 1, you’ve reached the end of the sequence and can stop.
• If n is even, divide it by two.
• If n is odd, multiply it by three and add one.
Although it also goes by several other names, this sequence is often called the
hailstone sequence because the values tend to go up and down before coming
back to 1, much as hailstones do in the clouds in which they form

Write a program that reads in a number from the user and then generates the
hailstone sequence from that poin
*/

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    //constraint n can only be positive
    int n = 0, steps = 0;
    cout << "Enter a number: ";
    while (cin >> n)
    {
        while (n >= 1)
        {
            if (n == 1)
            {
                cout << n << " ends the sequence!" << endl;
                break;
            }

            if (n % 2 == 0)
            {
                cout << n << " is even, so I divide it by 2 to get ";
                n /= 2;
                cout << n << endl;
            }
            else
            {
                // If n is odd, multiply it by three and add one.
                cout << n << " is odd, so I multiply it by 3 and add 1 to get ";
                n = n * 3 + 1;
                cout << n << endl;
            }
            steps++;
        }
        cout << "Completed in " << steps << " steps" << endl;
        // reset 
        steps = 0;
        cout << "Enter a number[~ to terminate]: ";
        
    }
}