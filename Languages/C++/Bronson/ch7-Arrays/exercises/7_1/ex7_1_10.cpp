/*
10. (Program) a. Write, compile, and run a C++ program to input the following integer numbers
into an array named grades: 89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, and 73. As each
number is input, add the numbers to a total. After all numbers are input and the total is
obtained, calculate the average of the numbers, and use the average to determine the deviation of each value from the average. Store each deviation in an array named deviation. Each
deviation is obtained as the element value less the average of all the data. Have your program
display each deviation with its corresponding element from the grades array.
b. Calculate the variance of the data used in Exercise 10a. The variance is obtained by squaring
each deviation and dividing the sum of the squared deviations by the number of deviations.
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



int main()
{
   int grades[] = {89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73},
       sizeGrades = sizeof(grades)/sizeof(int), 
       deviation[sizeGrades] = {0}, variance = 0, devSquared = 0,
       total = 0, average = 0;
         

    cout << sizeGrades << endl;

   
   for (int i = 0; i < sizeGrades; ++i)
   {
       total += grades[i];
   }
   cout << "Total: " << total << endl;

   //compute average
   average = total / sizeGrades;
   cout << "Average: " << average << endl;

   //compute and store deviations
   for (int i = 0; i < sizeGrades; ++i)
   {
       deviation[i] = grades[i] - average;
       devSquared += pow(deviation[i], 2);
   }

   //compute and store variance
   // variance of the data used in Exercise 10a. The variance is obtained by squaring
   //each deviation and dividing the sum of the squared deviations by
   // the number of deviations (size of array). 

   variance = devSquared / sizeGrades;

   cout << "Grade" << "\t" << "Deviation" << "\t" << "Deviation Sqrd" << endl; 
   for (int i = 0; i < sizeGrades; ++i)
   {
        cout << grades[i] << setw(10) << deviation[i] << setw(20) 
             << pow(deviation[i], 2) << endl;
   }
   cout << "Variance = " << variance << endl;


}