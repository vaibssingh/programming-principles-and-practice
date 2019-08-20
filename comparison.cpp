#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    double val1;
    double val2;
    cin >> val1 >> val2;
    if (val1 > val2) {
        cout << "Larger no is " << val1 << "\n";
    } else
    {
        cout << "Larger no is "<<val2 << "\n";
    }
    cout << "Sum of two numbers is "<< val1 + val2 << "\n";
    cout << "Difference is "<< val1 - val2 << "\n";
    cout << "product is "<< val1 * val2 << "\n";
}