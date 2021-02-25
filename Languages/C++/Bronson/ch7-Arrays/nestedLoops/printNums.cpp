/*
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main()
{
    int n = 0;
    cout << "Enter a max ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {        
        for (int j = 0; j <= i-1; ++j)
        {
            cout << " * ";
        }
        cout << i << endl;
    }
}