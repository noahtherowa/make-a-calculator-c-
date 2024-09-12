// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//Noah Blum
//Make a Calculator
// 9/12/24
// extra: round division to 2 decimal places

#include <iostream>
using namespace std;
int main()
{
    float x; // declare variables
    float y;
    float add;
    float sub;
    float mult;
    float div;
    float mod;
    float incre;
    float decre;
    cout << "Enter your first number\n"; // get user input
    cin >> x;
    cout << "Enter your second number\n";
    cin >> y;

    add = x + y;   // make variables for all calculations
    sub = x - y;
    mult = x * y;
    div = ceil((x / y)*100)/100; // round 2 decimal places (extra)
    mod = int(x) % int(y);
    incre = ++x;
    decre = --x;

    cout << "The numbers added are: " << add << endl; // print answers
    cout << "The numbers subtracted are: " << sub << endl;
    cout << "The numbers multiplied are: " << mult << endl;
    cout << "The numbers divided are: " << div << endl;
    cout << "The module of the numbers are: " << mod << endl;
    cout << "The increment of the first number is: " << incre << endl;
    cout << "The decrement of the second number is: " << decre << endl;

}