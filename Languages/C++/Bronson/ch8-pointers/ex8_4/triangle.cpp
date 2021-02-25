/*
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <random>
#include <algorithm>
#include <chrono>
#include <functional>
using std::cin;
using std::cout;
using std::endl;
using std::mt19937;
using std::mt19937_64;
using std::setw;
using std::string;
namespace sc = std::chrono;

int main()
{
    int height = 0;
    cout << "How tall do want your triangle to be?: ";
    cin >> height;
    char star = '*';

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < i; ++j)
        {
            //print a star on each row
            cout << setw(0.25) << star;
        }
        cout << endl;
    }

    //to invert this triangle the inner loop starts at the top
    //i.e. where the height is at it's max
    cout << "Invbersion\n";    
    for (int i = height; i > 0; --i)
    {   
        for (int j = 0; j < i; ++j)
        {                        
            cout << setw(0.25) << star;
        }
        cout << endl;
    }
    
    cout << "End inversion\n";


    //small array tester
     int a[] = {2, 3, 5, 7, 11};
      printf("%d\n", *(a + 2));
      printf("%d\n", a[2]);
      printf("%d\n", 2[a]);
      printf("%d\n", 4[a]);
      return 0;
}