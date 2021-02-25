### 6.3 Returning Multiple Values

###### Passing  a Variable

The term is used when a function is called with a variable that was defined previously.

___Example:___

```c++
int age = 13;
calculateBirthday(age);
```

In the example above, the variable age was passed to the function calculateBirthday.

The two methods of passing variables are: 

1. Passing by value
2. Passing by reference.

###### Passing by Value

When an argument/variable is passed by value, the variable's value is copied into the value of the function's parameter. A copy of the variables value is passed, thus the variable itself stays unchanged outside of the function.

___Example___

```c++
#include <iostream>
void foo(int y)
{
    std::cout << "y = " << y << "\n";
}

int main()
{
    foo(5);   //first call
    
    int x = 6;
    foo(x);   //second call
    foo(x+1);  //third call
}
```

In the program above the first call foo(5), passes a literal value to foo. foo(x) passes a copy of x's value to foo(), in foo(x+1) a copy of x incremented by 1 is passed to foo. However no change happens to x. Only a copy was passed, so x stays the same.

###### Passing by Reference

The address of a variable is passed to the function as an argument. This way the function actually changes what happens to the variable. 

```
#include <iostream>
void foo(int& y)
{
    std::cout << "y = " << y << "\n";
    y = y + 12;
    std::cout << "y is now " << y << "\n";
}

int main()
{        
    int x = 6;
    cout << "x = " << x << endl;
    foo(x);
    cout << "x = " << x << endl;    
}
```

The above program demonstrates a reference call to the address of x. All changes in the function are done at x's address, so the changes are saved.

###### Returning Multiple Values

By passing by reference, a program can get multiple values from a function. Look at the example below.

```c++
void calc(double xNum, double yNum, double& product, double& sum)
{
    product = xNum * yNum;
    sum = xNum + yNum;
}

int main()
{
    double firstNum = 0, secNum = 0, sum = 0, product = 0;
    cout << "Enter two numbers: ";
    cin >> firstNum >> secNum;
    calc(firstNum, secNum, sum, product);
    
    cout << "\nThe sum of the numbers is " << sum << endl;
    cout << "The product of the numbers is" << product << endl;
}
```

The function above provided two values to the main program: sum and products. This is a means used to get multiple values from a function.