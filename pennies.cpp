#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    cout << "How many pennies do you have?\n";
    int pennies;
    cin >> pennies;
    cout << "How many nickels do you have?\n";
    int nickels;
    cin >> nickels;
    cout << "How many dimes do you have?\n";
    int dimes;
    cin >> dimes;
    cout << "How many quarters do you have?\n";
    int quarters;
    cin >> quarters;
    cout << "How many half dollars do you have?\n";
    int halfDollars;
    cin >> halfDollars;
    cout << "How many dollars do you have?\n";
    int dollars;
    cin >> dollars;

    double total = 0;
    int totalCents = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (halfDollars * 50) + (dollars * 100);
    total = totalCents / 100.0;

    cout << "You have " << pennies << " pennies.\n";
    cout << "You have " << nickels << " nickels.\n";
    cout << "You have " << dimes << " dimes.\n";
    cout << "You have " << quarters << " quarters.\n";
    cout << "You have " << halfDollars << " half dollars.\n";
    cout << "You have " << dollars << " dollars.\n";
    cout << "The value of all your coins is " << total << "$";
}