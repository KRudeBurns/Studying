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

//get menu
int getWhatTheyWant();

//main funciton
int main()
{
    //lets create the menuu
    int whatTheyWant = getWhatTheyWant();

    while (whatTheyWant != 4)
    {
        
        
        //give player chance to repeat choices
        whatTheyWant = getWhatTheyWant();
    }
}

//get menu
int getWhatTheyWant()
{
    int choice;
    cout << "1 - just plain items " << endl;
    cout << "2 - beautiful items " << endl;
    cout << "3 - harmful items " << endl;
    cout << "4 - quit program " << endl;

    cin >> choice;
    return choice;
}
