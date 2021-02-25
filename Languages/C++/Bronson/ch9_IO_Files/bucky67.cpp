/*
From bucky's playlist
https://www.youtube.com/playlist?list=PLAE85DE8440AA6B83
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
    //based on bucky66.cpp
    //ifstream allows to read from a file
    ifstream aFile("players.txt");

    //we want to read the data from the document
    int id;
    string name;
    double money;

    while (aFile >> id >> name >> money) //read until you are at the end-of-file marker.
    {
        cout << id << ", " << name << ", " << money << endl;
    }
}