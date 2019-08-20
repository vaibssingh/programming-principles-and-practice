#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    cout << "Enter a number in miles: ";
    int miles;
    cin >> miles;
    double km;
    km = miles * 1.609;
    cout << "Distance in km: " << km;
}