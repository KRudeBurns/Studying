/*
For a slightly more interesting challenge than ex5, 
write a program that finds both the largest and the second-largest 
number in a list, prior to the entry of a sentinel. 

Once again using 0 as the sentinel
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
   long long sentinel = 0, largest = 0, secondLargest = 0;
   cout << "Enter your sentinel. [ 0 terminates activity ]: ";

   while (cin >> sentinel && sentinel != 0)
   {
       if (sentinel > largest)
            if (secondLargest < largest)
                secondLargest = largest, largest = sentinel;
            else
                largest = sentinel;
        else 
            if (sentinel>secondLargest)
                secondLargest = sentinel;
                

       cout << "Largest = " << largest << endl
            << "Second Largest = " << secondLargest << endl;

       cout << " > ";
   }
   cout << "\nYour Largest entry: " << largest
        << "\nYour second largest entry: " << secondLargest;
}