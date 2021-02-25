/*
3. (Modify) a. Rewrite the findMax() function in Program 6.4 so that the variable max, declared in main(), is used to store the maximum value of the two passed numbers. The value of max should be set from within findMax(). 
(Hint : A reference to max has to be accepted by findMax().)

b. Include the function written in Exercise 3a in a working program. Make sure your function is called from main() and returns a value to main() correctly. Have main() use a cout statement to display the returned value. Test the function by passing various data to it and verifying the returned value.
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

double findMax(double, double, double&);

int main()
{
   double x = 0, y = 0, max = 0;
   
   cout << "Enter two numbers: ";
   while (cin >> x >> y)
   {
        findMax(x, y, max);
        cout << "Your largest number is: " << max << endl;
        cout << "Enter two numbers[~ to end]: ";
   }
}

double findMax(double xNum, double yNum, double& maxNum)
{
    if (xNum > yNum)
       maxNum = xNum;
    else
       maxNum = yNum;
    
    return maxNum;
}