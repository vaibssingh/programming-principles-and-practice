#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    constexpr double yen = 0.1;
    constexpr double euro = 0.9;
    constexpr double pound = 0.8;
    constexpr double yuan = 0.3;
    constexpr double kronos = 1.2;

    double amount = 1;
    char unit = ' ';

    cout << "Enter the amount with the currency: ";
    cin >> amount >> unit;

    switch (unit)
    {
    case 'y':
        cout << "Yen in Dollars " << amount * yen;
        break;
    case 'p':
        cout << "Pound in Dollars " << amount * pound;
        break;
    case 'e':
        cout << "Euro in Dollars: " << amount * euro;
        break;
    case 'k':
        cout << "Kronos in Dollars: " << amount * kronos;
        break;
    case 'u':
        cout << "Yuan in Dollars: " << amount * yuan;
        break;
    default:
    cout << "Not a valid unit";
        break;
    }
}