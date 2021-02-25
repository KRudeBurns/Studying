/*
8. (Program) a. Write, compile, and run a C++ program to input 10 integer 
numbers into an array named fmax and determine the maximum value entered. 
Your program should contain only one loop, and the maximum should be determined
as array element values are being input. 
(Hint: Set the maximum equal to the first array element, which should be 
input before the loop used to input the remaining array values.)

b. Repeat Exercise 8a, keeping track of both the maximum element in the array and the index number for the maximum. After displaying the numbers, display these two messages (replacing the underlines with the correct values):
The maximum value is: ____
This is element number ___ in the list of numbers

c. Repeat Exercise 8b, but have your program locate the minimum value of the data entered.
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int MAXSIZE = 10;
    int fmax[MAXSIZE] = {0};
    int max = fmax[0], index = 0, min = fmax[0], mindex = 0;

    for (int i = 0; i < MAXSIZE; ++i)
    {
        cout << "Enter a value : ";
        cin >> fmax[i];

        //set initial value for min
        if(i == 0)
        {min = fmax[i], mindex = i; }

    
        if(fmax[i] > max)
            max = fmax[i], index = i;
        
        /* if (min == 0)
        {
            min = fmax[i];
        } */

        if (fmax[i] < min)
            min = fmax[i], mindex = i;
    }
    
    cout << "Your entered: \n";
    for(int j = 0; j < MAXSIZE; j += 5)
    {        
        cout << fmax[j] << " " << fmax[j+1] << " " << fmax[j+2] 
             << " " << fmax[j+3] << " " << fmax[j+4] << endl;
        
    }

    cout << "The largest value is " << max << endl
         << "The index is " << index << endl;

    cout << "The smallest value is " << min << endl
         << "The index is " << mindex << endl;

}