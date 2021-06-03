#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
using namespace std;

int main()
{
    cout << "Please enter expression (we can handle + and -): ";
    int lval = 0;
    int rval;
    char op;
    int result;
    cin >> lval >> op >> rval;

    if (op == '+')
        result = lval + rval;
    else if (op == '-')
        result = lval - rval;

        cout << "Result: " << result << "\n";

        return 0;
}