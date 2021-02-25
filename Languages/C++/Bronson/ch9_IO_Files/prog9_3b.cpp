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
    string fileName;

    cout << "Enter the filename: ";
    cin >> fileName;

    std::ofstream inFile;
    inFile.open(fileName); //open the file
    if (inFile.fail())
    {
        cout << "Failure" << endl;
        exit(1);
    }
    cout << "The file opened." << endl;
    inFile << "THe new file has been saved\n";
    inFile.close();
}