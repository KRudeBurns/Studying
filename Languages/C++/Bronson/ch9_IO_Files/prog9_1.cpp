/*
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <random>
#include <algorithm>
#include <chrono>
#include <functional>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::mt19937;
using std::mt19937_64;
using std::ostream;
using std::setw;
using std::string;
namespace sc = std::chrono;

int main()
{
    //see note below
    ifstream inFile("boilerplat.cpp");

    if (inFile.fail())
    {
        cout << "Failure to open" << endl;
        exit(1);
    }
    else
    {
        cout << "Success" << endl;
    }
}

/*
to open a file, you can declare and initialize it. so here are two methods
Method 1.
 - Declare the ifstream variable;
 - assign a file for the ifsrream variable to open.
This looks like:
  ifsream inFile;
  inFile.open("file-name");

 Method 2:
 - declare the ifsream variable and assign it an object to open.
 
 This looks like
    ifstream inFile("file-name");
*/