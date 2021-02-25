/*
Using the AddIntegerList program from Figure 1-5 as a model, 
write a program AverageList that reads in a list of integers 
representing exam scores and then prints out the average. 

Because some unprepared student might actually get a score of 0, 
your program should use −1 as the sentinel to mark the end of the input.
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
   double sentinel = -1, grades = 0, sum = 0, count = 0;
   
   while (cin >> grades)
   {
       if (grades <= sentinel)
          break;
        
       sum += grades, count++;        
   }

   cout << "Total Grades: " << sum << endl;
   cout << "total entries: " << count << endl;
   cout << "Average grades: "  << sum / count << endl;
}