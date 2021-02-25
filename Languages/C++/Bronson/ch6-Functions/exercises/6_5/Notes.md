# 6.5 Variable Storage Category #

### Scope of a Variable
The scope of a variable defines where a variable can be used in a program, or the space in a program where the variable is valid.

### Storage Category of a Variable
Where and how long a variable's storage location are kept before being released back to the operating system are determined by the variable's storage category.

The four variable storage categories are __auto, static, extern, and mutable__.

#### Automatic Storage Variable
1. __Keyword__: none. The assumed default for any declared variable.

   Before C++11, the auto keyword declares a variable in the automatic storage class. But since C++11, the auto keyword declares a variable whose type is deduced from the initialization expression in its declaration.
   
2. __Scope__: The scope is local to the function in which they are declared.

3. __Lifetime__: The lifetime of an automatic storage variable is function block. Its storage is allocated when the function is called and deallocated when the function call is terminated.

4. __Visibility__: The visibility of the automatic storage variable is local to it's function block. It is not visible outside it's block.


#### Static
1. __Keyword__: ```static```. 
   
2. __Scope__: The scope is entire program.

3. __Lifetime__: The lifetime of a static variable is the duration of the program. This means the storage is allocated once the program starts, and deallocated when the program finishes.

4. __Visibility__: The visibility of the static variable could either be global, namespace scope, and class scope. 

5. __Usability__: The static variable means it can only be used within the source file it was declared. It cannot be used outside of that source file. 

#### Extern
1. __Keyword__: ```extern```.

2. __Scope__: The purpose of an extern storage category is to extend a global variable's scope beyond its file boundaries.

3. __Lifetime__: the lifetime of an extern variable is the duration of the program.


#### References
https://docs.microsoft.com/en-us/cpp/cpp/storage-classes-cpp?view=vs-2019#static
