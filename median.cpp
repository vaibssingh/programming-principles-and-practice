#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

template <typename Container>
inline void sort(Container &c)
{
    std::sort(std::begin(c), std::end(c));
}

int main()
{
    vector<double> temps; // temperatures
    cout << "Enter few numbers: ";
    for (double temp; cin >> temp;) // read into temp
        temps.push_back(temp);      // put temp into vector
    // compute median temperature:
    sort(temps); // sort temperatures
    if (temps.size() % 2 == 0)
    {
        cout << "Median temperature: " << (temps[temps.size() / 2] + temps[temps.size() / 2 - 1]) / 2 << '\n';
    }
    else
    {
        cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
    }
}