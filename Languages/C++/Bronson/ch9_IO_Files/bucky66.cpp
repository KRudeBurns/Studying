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
using std::fstream;
using std::ifstream;
using std::mt19937;
using std::mt19937_64;
using std::ofstream;
using std::setw;
using std::string;
namespace sc = std::chrono;

int main()
{
    ofstream aFile("players.txt");
    int idNUmber;
    string name;
    double money;

    if (aFile.is_open())
    {
        cout << "Enter players ID, Name, and money: \n";
        cout << "press Ctrl+Z to quit\n";

        while (cin >> idNUmber >> name >> money)
        {
            aFile << idNUmber << " " << name << " " << money << endl;
        }
    }
    else
    {
        cout << "Error: No file associated with object.\n";
        exit(1);
    }
    
}