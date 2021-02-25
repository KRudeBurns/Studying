/*
The German mathematician Leibniz (1646–1716) discovered the rather
remarkable fact that the mathematical constant π can be computed using the
following mathematical relationship:
 ≅ 1 – 1/3 + 1/5 – 1/7 + 1/9 – 1/11 + . . .
The formula to the right of the equal sign represents an infinite series; each
fraction represents a term in that series. If you start with 1, subtract one-third,
add one-fifth, and so on, for each of the odd integers, you get a number that
gets closer and closer to the value of π/4 as you go along.
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
   double n = 1.0, pi = 0.0;

   while ( n < 1000)
   {
       //what are my values now?
       cout << "n = "<< n << " and pi = " << pi << endl;
       //print sequence so far
       cout << "So far in the sequence the operation is as follows: "
            <<   " 1 - 1/" << n+2 << " + 1/" << n+4 << endl;      
       pi = 1 - (1/(n+2)) + (1/(n+4)) ;     
       n += 4; 
   }
}