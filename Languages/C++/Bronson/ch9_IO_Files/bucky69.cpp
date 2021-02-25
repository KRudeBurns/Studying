/*
From bucky's playlist
https://www.youtube.com/playlist?list=PLAE85DE8440AA6B83
*/

#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::string;

//builds on vid 68

//fxn prototypes
int getWhatTheyWant();
void displayItems(int);

//main funciton
int main()
{
    //lets create the menuu
    int whatTheyWant = getWhatTheyWant();

    while (whatTheyWant != 4)
    {
        switch (whatTheyWant)
        {
        case 1:
            displayItems(1);
            break;
        case 2:
            displayItems(2);
            break;
        case 3:
            displayItems(3);
            break;
        default:
            break;
        }

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

//display items function
void displayItems(int x)
{
    //open the objects file
    ifstream objectFile("objects.txt");

    string name;  //name of object
    double power; //power impact of each object

    if (x == 1) //display items with 0 power
    {
        cout << endl;
        //loop through each object
        while (objectFile >> name >> power)
        {
            if (power == 0)
            {
                cout << name << " " << power << endl;
            }
        }
        cout << endl;
    }

    if (x == 2) //display items with power > 0
    {
        cout << endl;
        //loop through each object
        while (objectFile >> name >> power)
        {
            if (power > 0)
            {
                cout << name << " " << power << endl;
            }
        }
        cout << endl;
    }

    if (x == 3) //display items with power < 0
    {
        cout << endl;
        //loop through each object
        while (objectFile >> name >> power)
        {
            if (power < 0)
            {
                cout << name << " " << power << endl;
            }
        }
        cout << endl;
    }
}