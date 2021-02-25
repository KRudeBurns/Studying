/*
8. The new operator returns the address of the
first new storage area allocated or returns NULL if there’s insufficient storage. 

Modify Program 8.8 to check that a valid address has been returned before attempting 
to place values in the grades array. 

Display an appropriate message if not enough storage is available.
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
    int numGrades = 0;
    cout << "Enter the number of grades to be processed: ";
    cin >> numGrades;

    /*
    I can create an array by using the pointer notation
    for the first address of the array, and then assigning
    the initial size of the array by using new keyword

    syntax:
    int * <name of variable> = new <type of variable>[size of variable]
    example:
    int * myArray = new int[size]
    char * chArray = new char[size]
    string * strArray = new string[size]

    */
    int *grades = new int[numGrades];

    //check if the first reserved location is NULL terminate if true
    if (grades == NULL)
    {
        cout << "you have no memory reserved";
        return 1;
    }
    else
    {
        for (int i = 0; i < numGrades; ++i)
        {
            cout << "Enter a grade: ";
            cin >> grades[i];
        }

        // print values
        cout << "\nPrinting values stored using array notation grades[i]: \n";

        for (int i = 0; i < numGrades; ++i)
        {
            cout << grades[i] << " ";
        }

        cout << "\n\nPrinting values stored in the array using pointer notation "
             << "*(grades+i) are: \n";

        for (int i = 0; i < numGrades; ++i)
        {
            cout << *(grades + i) << " ";
        }

        // print addresses
        cout << "\n\nPrinting addresses with address-of notation &grades[i] are: \n";

        for (int i = 0; i < numGrades; ++i)
        {
            cout << &grades[i] << " ";
        }

        // print addresses
        cout << "\n\nPrinting addresses with notation grades+i are: \n";

        for (int i = 0; i < numGrades; ++i)
        {
            cout << grades + i << " ";
        }       

        //since size of array was dynamically allocated, you have to
        //delete the space and return it back to the system when you are done
        delete[] grades;
    }
}