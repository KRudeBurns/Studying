[[_TOC_]]

# Arrays and Pointers

## Intro



![image-20200930114832480](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930114832480.png)

- The image above shows an array named grade that carries 5 integers. 
- Each integer requires 4 bytes of storage. (sizeof(int) = 4)

- To access an element in the array we use our normal syntax `grade[subscript]`

- Internally, the computer uses the subscript to calculate the array element's address based on the array's starting address and the amount of storage each element uses. 

- Example: Lets get the address of the fifth element in grades: grade[4].

  **`&grade[4] = &grade[0]+(4*sizeof(int))`**

- What this means is that to find the address of an array's element, the computer starts from the starting point of the array, and then sizes up how many bytes exist from that point to the subscript's point.

- What this shows me is that an array is a contiguous data structure, meaning each element is within the same memory block. This may not be the case for all arrays, but for now that's proven by this example above. 

### Referencing Arrays with Pointers

![image-20200930120617974](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930120617974.png)

![image-20200930120707955](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930120707955.png)

If you store the first address of an array's elements in a pointer, then navigating the array is pretty straightforward as seen in the images above.

![image-20200930120846261](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930120846261.png)

Below is an example of a program that would print all the array's elements using pointers.

![image-20200930121914695](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930121914695.png)



Note that the array's elements are dereferenced using parentheses. 

- ***gPtr+1** is going to give me the sum of 1 and the value pointed to by gPtrr;
- *(gPtr+1) is going to give me the value pointed to 1 address block over from gPtr's starting address.

### The Array name is also a Pointer

I do not need to create gPtr as a pointer to **grade**, because, **grade** is an pointer in itself to the first element of the array. 

So given an array grade[5],

```c++
cout << *grade;  // will print grade[0], a value;
cout << grade; // will print &grade[0], an address;
```
The image below shows us how using the array name works as  a pointer.

![image-20200930123230947](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930123230947.png)

### Do Not use the Array Name - It is dangerous

Yes An array name and a pointer can be used interchangeably. However.

- a true pointer is a variable, and the address stored in it can be changed. 

- An array name is a constant so you cannot change the address by an assignment statement. 
  ``` c++
  int grades[5] = {1, 5, 3, 5, 2}
  int * gPtr = grades[0];
  //the following statements will cause compiler errors  
  grades = gPtr;  //error. You cannot change grades's value as a constant
  grades = &grade[2]; //error. You cannot change grades's value as a constant  
  ```

- It is better to use a pointer variable because you can make changes as you see fit. 

### Pointers Can be Used as Arrays

- Also using a pointer can fell like using an array syntatically. So

  ``` c++
  *gPtr == gPtr[0];
  *(gPtr+i) == gPtr[i];
  ```
The example below is also valid. Even though gPtr is not an array, we can use it as such

  ```c++
  #include <iostream>
  using std::cout;
  using std::endl;
  
  int main()
  {
      const int ARRAYSIZE = 6;    
      int grade[ARRAYSIZE] = {98,87,92,78,85,77};
      int * gPtr = &grade[0];
      
      for (int i = 0; i < ARRAYSIZE; ++i)
      {
          cout << "\nElement " << i + 1 << " = " << gPtr[i] << endl;
          // gPtr[i] is same as *(gPtr + i)
      }
      
  }
  ```


### Dynamic Array Allocation

The normal assignment of array sizes so far has been static. The size of the the array cannot be changed after the program has compiled. Dynamic array allocation will allow an array's size to be adjustable.

#### Dynamic Memory Allocation

- Under the dynamic memory allocation system, the amount of storage to be allocated to an array is determined and adjusted at run time instead of compile time.
- This allocation is especially important for data structures such as list, or vectors, because it allows the adjustment of data structure as data is added or removed during runtime.

#### Keywords: new & delete

- The C++ operations **new** and **delete** gives C++ the dynamic allocation capability. 

- To use these keywords, the **new** header file must be included in the program.

![image-20200930133016494](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200930133016494.png)

```c++
int * num = new int;
```

The 