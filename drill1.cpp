#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

double larger(double a, double b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

double smaller(double a, double b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(){
    cout << "Enter two numbers: ";
    double first_number;
    double second_number;
    while (cin >> first_number >> second_number)
    {
        double larger_number = larger(first_number, second_number);
        double smaller_number =  smaller(first_number, second_number);

        cout << "The larger number is " << larger_number << '\n';
        cout << "The smaller number is " << smaller_number << '\n';
        if ((larger_number - smaller_number) < 1.0/100)
        {
            cout << "The numbers are almost equal";
        }
        
    }
    
}

// int main()
// {
//     cout << "Enter two numbers: ";
//     double first_number;
//     double second_number;
//     while (cin >> first_number >> second_number)
//     {
//         // cout << first_number << '\n' << second_number;
//         if (first_number > second_number)
//         {
//             cout << "The smaller value is " << second_number << '\n'
//                  << "The larger value is " << first_number << '\n';
//         }
//         else if (second_number > first_number)
//         {
//             cout << "The smaller value is " << first_number << '\n'
//                  << "The larger value is " << second_number << '\n';
//         }
//         else if (first_number == second_number)
//         {
//             cout << "The numbers are equal" << '\n';
//         }
//     }
// }