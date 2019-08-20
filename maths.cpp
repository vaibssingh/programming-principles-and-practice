// #include "std_lib_facilities.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    cout << "Enter the operand and two numbers: ";
    string operation;
    double firstNumber = 0;
    double secondNumber = 0;
    cin >> operation >> firstNumber >> secondNumber;
    double res = 0;
    if (operation == "+" || operation == "plus")
    {
        res = firstNumber + secondNumber;
    }
    else if (operation == "-" || operation == "minus")
    {
        res = firstNumber - secondNumber;
    }
    else if (operation == "*" || operation == "mul")
    {
        res = firstNumber * secondNumber;
    }
    else if (operation == "/" || operation == "div")
    {
        if (secondNumber == 0)
        {
            cout << "Trying to divide by zero";
        }
        res = firstNumber / secondNumber;
    }

    cout << firstNumber << operation << secondNumber << " = " << res << '\n';
}