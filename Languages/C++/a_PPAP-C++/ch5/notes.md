## Chapter 5
### Errors

> *This took too long to get to.* 

#### 5.1 Introduction
##### Classification of Errors

 - **Compile time errors:** errors found by the compiler, based on rules they violate. 
   For example: Syntax errors and Type Errors.
   
 - **Link-time Errors:** Found by linker when trying to combine object files into an executable program.

 - **Run-time Errors:** Found by checks in a running program. Further classified as
    - Errors detected by the computer (hardware and/or OS)
	- Errors detected by a library (eg. standard library)
	- Errors detected by user code.
	
 - **Logic Errors:** Errors found by the programmer looking for the causes of erroneous results. 

##### Summary:
1. The four error checkers are - 
 - Compiler checks for errors.
 - Linker checks for errors
 -  The computer/os checks for errors while the program runs.
 - The programmer checks for errors in logic.
	
	
2. Do not assume error free programming. Instead, plan on how to deal with errors. The best approach
is to: 
	- Organize software to minimize errors. i.e. Plan your software.
	- Eliminate most errors through debugging and testing.
	- Make sure remaining errors are not fatal.
	
---
#### 5.2 Sources of Errors
  - Poor planning - failure to plan is planning to fail.

  - Incomplete Programs - programs that have not been written to handle possible use cases.
  
  - Unexpected Arguments - your functions should take arguments it can handle.
  
  - Unexpected Inputs - Program read input, and assumes a certain input, wrong input causes error.
  
  - Unexpected State - state means data. Wrong or incomplete data give error.
  
  - Logical Errors - code that doesn't do what it was supposed to do.

---
#### 5.3 Compile-time Errors

 - The compiler is the first line of defense against errors. 

 - The compiler analyzes code to detect syntax errors and type errors. 

Lets uses a simple function to illustrate syntax errors and type errors.

```c++
int area(int length, int width); //calculate the area of a rectangle
```

##### 5.3.1 Syntax Errors
Imagine if we called the function area() as shown below:
```c++
	- int s1 = area(7; //error: ) missing. 

	- int s2 - area(7) //error: ; missing.
	
	- Int s3 - area(7); //error: Int is not a type
	
	- int s4 - area('7); //error: error: non-terminated character ('missing).
```
*All the above examples are syntax errors. The compiler will catch them when compiling the program to machine code.*
	

##### 5.3.2 Type Errors
The next error the compiler finds are type errors, as illustrated in our example below:
```c++
	- int x0 = arean(7); //error: undeclared function
	
	- int x1 = area(7); //error: wrong number of arguments
					    //area() takes two ints, not one
						
	- int x2 = area("seven", 7);	//error: 1st argument has the wrong type
									//area() takes two ints, no strings are allowed.
```
##### 5.3.3 Non-errors
Some things the compiler accepts are wrong, but will allow the program to run. As seen below:
	
```c++
	- int x4 = area(10,-7);			//the compiler will accept this, but the width is a negative number.

	- int x5 = area(10,-7);			//the compiler will accept this, but the width is a negative number.
```

---
#### 5.4 Link-time Errors

 - A program is made up of several compiled parts, called __translation units__. 

 - Every function in a program must be declared with exactly the same type in every translation
   unit used. 
 - Every function must also be defined exactly once in a program. 

If the two rules above are violated, the linker will give an error.

 Lets turn to our example program for more insight.

```c++
int area(int length, int width);   	//calculate area of rectangle

int main()
{
	int x = area(2,3);
}
```


 - In the program above we have the declaration of the function area(), and then we see it being used
 in main().

 - Unless we have defined area() in another source file and linked the code generated from that source file
	to this code, the linker will complain that it cannot find the definition for area().
	
 - The definition of area() must have the same types as its declaration. 

		```c++
	int area(int y, int x) {/*defintion of area()*/}   	//calculate area of rectangle
	```
	
	
	
 - Functions with the same name, but different types will not match and will be ignored	

```c++
	int area(int y, int x, char unit) {/*defintion of area()*/}
    double area(double y, double x) {/*defintion of area()*/}	
```

 - These rules apply to all entities of a program including variables and types. 

---
#### 5.5 Run-time Errors

 - If your program has no compiler or linker errors, it will run. So run-time errors are found when the 
	program is running. The sources of these error are not always easy to detect.

 Lets turn to our example program again.
```c++
		int area(int length, int width)	//calculate the area of rectangle
		{
			return length * width;
		}

		int framed_area(int length, int width)	//calculate the area within frame
		{
			return area(x-2, y-2);
		}

		int main()
		{
			int x = -1;
			int y = 2;
			int z = 4;
			//...
			int area1 = area(x,y);
			int area2 = framed_area(1,z);
			int area3 = framed_area(y,z);
			double ratio = double(area1)/area3;	//convert to double for floating point division
			//print output 
			cout << "area1 = " << area1 << endl;
			cout << "area2 = " << area2 << endl;
			cout << "area3 = " << area3 << endl;
			cout << "ratio = " << ratio << endl;
		}
```

After running the program, we get the following outputs:
	area1 = -2
	area2 = -2
	area3 = 0
	ratio = -inf

These are clear errors. Only discovered when running the program. 

1. area1 and area2 give negative outputs that defy mathematical and physical law. These results should not be accepted, except it is part of the program design.

2. area3 will be zero, which means the ratio double(area1)/area3 divides by zero. 
	This leads to an incorrect number, and an erroneous output: ratio = -inf.

"Who deals with the error? The caller of the function area() or the function itself?
1. Let the caller of area() deal with the bad arguments.
2. Let area() deal with the bad arguments.

##### 5.5.1 _Caller Deals with the Errors_

*Note - the text uses a custom error() function. Since I do not have the text, I used throw() which is from the std c++.*

 - This option is useful when the function being called is in a library we cannot modify. 
 For instance, using a third-party library, that is unmodifiable or whose implementation is unknown.

 - Protecting this call of area(x, y) is as simple as setting boundaries for the input. 
	We do not want negative values for our lengths or widths, so we set that boundary now.
	
	```c++
	if(x <= 0) throw(1);
	if(y <= 0) throw(2);
	int area1 = area(x,y);
	...;
	
	or concisely,
	if (x <= 0 || y <= 0) throw(1);
	int area1 = area(x,y);
	....;
	
	When I run the program, I get the error:
	" terminate called after throwing an instance of 'int' "	
	```
 - Lets go to the call to framed_area(). In the function framed_area(), we know that
```c++
	int framed_area(int length, int width)	//calculate the area within frame
	{
		return area(x-2, y-2);
	}
```

From above, we know that any value of x or y <=2 will give a return a non-positive value. In our definition of the variable area2:	
```c++
int area2 = framed_area(1,z);
```

We need only concern ourselves with z, the second argument of framed_area(). We cannot have
```z <= 2.```

So we can implement as follows:
```c++
if (z <= 2) throw(1);
int area2 = framed_area(1,z);
```

 - Moving on, in our definition of the variable area3:
	
	```int area3 = framed_area(y,z);```
	
	We must concern ourselves with y and z. We cannot have y<=2 or z <= 2.
	
	So we can implement as follows:
	
	```c++
	if (y<=2 | z <= 2) throw(1);
	int area3 = framed_area(y,z);
	```
	
 - But the examples above are unrealistic. Why? Because if there is any change in the area() function,
 then the error check we have set up may fail. What if someone changes the return area in the function such that 
	
	```c++
	int framed_area(int length, int width)
	 (
		 return area(x-1, y-1)
		 //instead of (x-2, y-2)
	 )
	```

Then our error check becomes invalid. 

- A better alternative is have a constant value that we will make comparisons to. So instead of asking if 
 y <= 2 or z <= 2, we look for a difference. We want to make sure that we have a constant value, and work with that.
 ```c++
	constexpr int frame_width = 2;
	if (1 - frame_width <= 0 || z - frame_width <= 0)
	{
	    cout << "Non positive argument for area()\n";
		throw(1);
	}
	int area2 = framed_area(1,z);	
	
	if (1 - frame_width <= 0 || z - frame_width <= 0)
	{
	    cout << "Non positive argument for area()\n";
		throw(1);
	}
	int area3 = framed_area(y,z);	
 ```
- The conditions ```if (1 - frame_width <= 0 || z - frame_width <= 0)``` and ```if (z-frame_width <= 0 || y-frame_width <=0)``` replace our previous conditions  ```if (z <= 2)``` and ```if(z<=2 || y <=2)``` respectively. 

 - Now we have a more consistent check that allows us to reject non-positive output from the function. Also we don't need to know how the function is implemented.

##### 5.5.2 The Callee Deals with the Errors

The code above is not great. We would rather have the error check in the function being called rather than having the caller implement his own check.

- Let's look at the function and add a check.
 ```c++
	int framed_area(int x, int y)
	{
	    constexpr int frame_width = 2;
		if (x - frame_width <= 0 || y - frame_width <= 0)
		{
		    cout << "Non positive argument for area()\n";
			throw(1);
		}
		return area(x-frame_width, y - frame_width);
	}
 ```
- The error check is implemented in the function. Our caller no longer has to 
 write tests in his main program. 

- Better yet, if we focus on the area() function, we can automatically set an error check there and then we do not even have a need for the frame_width constant, because once area is negative, we have no way of moving the program forward.

- However, we will still want to keep this framed_area error check to ensure that all called functions are error bound.

Lets now see what our corrected code should look like in it's entirety. 
​

```c++
int area(int length, int width)		//calculate the area of rectangle
	{
	    if (length <= 0 || width <= 0)
		{
		    cout << "Non positive argument for area()\n";
			throw(1);
		}
		return length * width;
	}

int framed_area(int x, int y)
{
    constexpr int frame_width = 2;
	if (x - frame_width <= 0 || y - frame_width <= 0)
	{
	    cout << "Non positive argument for area()\n";
		throw(1);
	}
	return area(x-frame_width, y - frame_width);
}

int main()
{
	int x = -1;
	int y = 2;
	int z = 4;
	//...
	int area1 = area(x,y);
	int area2 = framed_area(1,z);
	int area3 = framed_area(y,z);
	double ratio = double(area1)/area3;		//convert to double for floating point division

	//print output 
    cout << "area1 = " << area1 << endl;
    cout << "area2 = " << area2 << endl;
    cout << "area3 = " << area3 << endl;
    cout << "ratio = " << ratio << endl;
}
```


#### 5.5.3 Error Reporting
 - You can report errors by returning a bad value. See example:

   ```c++
   int area (int length, int width)
   {
       if (length <= 0 || width <= 0)
       {
           return -1;
       }
       return length * width;
   }
   ```

   

- The code above returns a negative value (read bad value)  when the length or width are negative.

  

  **Example 2**

  ```c++
  char ask_user(string question)
  {
      cout << question << "? answer yes or now \n";
      string answer = " ";
      cin >> answer;
      if (answer == "y" || answer == "yes")
          return 'y';
      if (answer == "n" || answer == "no")
          return 'n';
      return 'b'; //'b' for bad answer
  }
  ```

- The code above checks the answer and returns 'b' if the answer is neither (y)es nor (n)o.

_Summary_

Returning a bad value helps to tell if the program has an error.

#### Exceptions

- Exceptions are C++'s way of deiling with errors. When C++ finds an error, it does not return a bad value, instead it throws an exception.

- The example below will help explain how to use exceptions and the try catch block

  ```c++
  #include <stdexcept>
  #include <limits>
  #include <iostream>
  using namespace std;
  
  void myFunc(int c)
  {
      if (c > numeric_limits <char> :: max())
          throw invalid_argument("MyFunc argument too large");
  }
  
  int main()
  {
      try
      {
          myFunc(256);   //intentionally caus an exception to throw, char limit is 255
      }
      catch (invalid_argument& e)
      {
          cerr << e.what() << endl;
          return -1;
      }
  }
  ```

- The code checks if myFunc has taking an int that exceeds the char max limit (255). If it has it will throw an error argument.

- The main block runs the main code in the try block, and the catch block handles any exceptions found.

- __cerr__ is cout for errors.

- The example below is shows more error handling

  ```c++
  int main()
  {
      try
      {
          vector <int> v;
          for (int x; cin >> x;)
          {
              v.push_back(x);   //set values
          }
          for (int i; i <= v.size(); ++i)
          {
              cout << "v[" << i << "] ==" << v[i] << '\n'; //print values
          }
      }
      catch (out_of_range)  //catch out of range errors
      {
          cerr << "Oops! Range error\n";
          return 1;
      }
      catch (...)   //catch all other errors
      {
          cerr << "Exception: something went awry\n";
          return 2;
      }
          
  }
  ```

  