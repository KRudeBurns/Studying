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
using std::mt19937;
using std::mt19937_64;
using std::setw;
using std::string;
namespace sc = std::chrono;

int main()
{
    std::ofstream aFile("test2.txt");
    //use this if you know the file you are working with

    //check if file is open
    if (aFile.is_open()) //i.e. if ooject is associated with a file
    {
        cout << "File is open" << endl;
        aFile << "A new line was created!!\n\n";
        aFile.close();
    }
    else{
        cout << "File is not open" << endl;
    }
    
}