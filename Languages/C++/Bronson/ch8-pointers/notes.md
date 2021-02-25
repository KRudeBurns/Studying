# Intro to Pointers
Every variable has three items to note: 
- The value stored in the variable
- The number of bytes reserved for the variable
- The memory address where the bytes are located.

Think of a variable as a box. What we need to know is:
 - What is in the box (i.e. the value)
 - How big is the box (number of bytes)
 - Where is the box (address in memory)

### Address <br> 
The location of the variable's first byte is known as the variable's address. The ampersand symbol ___(&)___ is used to reveal the address of the variable.

### How do I declare the address of a variable?
- Use the address-of operator as a prefix for the variable. 
- **Example:**
  ```c++
  int a = 22; // and int variable storing the value 22
  cout << "value of a = " << a << endl;
  cout << "address where a is stored = " << &a << endl;

### How do I store my addresses in a variable?
- If I want to store the address in a variable, so I can manipulate 
the content of that variable, I need to store the address in a pointer 
variable.

- Pointers are variables that are designed to hold the address of another
variable.

```c++
int a = 22; //int variable storing 22
int * intPtr = &a;    //intPtr is a variable that is a pointer to an 
                      //address that contains integers.
```
- 