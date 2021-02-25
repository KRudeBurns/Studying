/*
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

void swap(double *, double *);

int main()
{
    double firstNum = 29.3, secnum = 6.34;

    swap(&firstNum, &secnum);
}

void swap(double *nm1Addr, double *nm2Addr)
{
    cout << "The number whose addres is in nm1Addr is "
         << *nm1Addr << endl;
    cout << "The number whose addres is in nm2Addr is "
         << *nm2Addr << endl;

    //let us swap
    double *temp = new double;
    temp = nm1Addr;
    nm1Addr = nm2Addr;
    nm2Addr = temp;
    cout << "temp = " << *temp << endl;
    
    cout << "The number whose addres is in nm1Addr is "
         << *nm1Addr << endl;
    cout << "The number whose addres is in nm2Addr is "
         << *nm2Addr << endl;

    cout << "\nlet us swap - version 2 no temp used" << endl;
    *nm1Addr = *nm1Addr + *nm2Addr;
    *nm2Addr  = *nm1Addr - *nm2Addr;
    *nm1Addr = *nm1Addr - *nm2Addr;


    cout << "The number whose addres is in nm1Addr is "
         << *nm1Addr << endl;
    cout << "The number whose addres is in nm2Addr is "
         << *nm2Addr << endl;
}