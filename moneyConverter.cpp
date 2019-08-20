#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    constexpr double yen = 120;
    constexpr double euro = 100;
    constexpr double pound = 80;

    double amount = 1;
    char currency = ' ';

    cout << "Enter the amount with currency that you want to convert: ";
    cin >> amount >> currency;

    if (currency == 'y')
    {
        cout << amount << " Yen = " << amount * yen << " Dollars.";
    }
    else if (currency == 'e')
    {
        cout << amount << " Euro = " << amount * euro << " Dollars";
    }
    else if (currency == 'p')
    {
        cout << amount << " Pound = " << amount * pound << " Dollars";
    }
    else
    {
        cout << "Not a valid currency!";
    }
}