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

double convert_to_meter(double length, string unit)
{
    constexpr double inch_to_cm = 2.54;
    constexpr double ft_to_inch = 12;
    if (unit == "cm")
    {
        return length / 100;
    }
    else if (unit == "m")
    {
        return length;
    }
    else if (unit == "in")
    {
        return (length * inch_to_cm) / 100;
    }
    else if (unit == "ft")
    {
        return (length * ft_to_inch * inch_to_cm) / 100;
    }
    else
    {
        cout << "No unit or invalid unit provided \n";
        return 0;
    }
}

int main()
{
    cout << "Enter a number: ";
    double input_number;
    double small_number = 0;
    double large_number = 0;
    double sum = 0;
    int total_values;
    string unit = "a";
    vector<double> numbers;
    for (double temp; cin >> temp >> unit;)
    {
        double length = convert_to_meter(temp, unit);
        sum += temp;
        numbers.push_back(length);
        cout << "Entered Number: " << length << " m"
             << "\n";
        sort(numbers);
        small_number = numbers[0];
        large_number = numbers[numbers.size() - 1];
        total_values = numbers.size();
    }
    cout << "The smallest number so far " << small_number << "\n"
         << "The largest number so far " << large_number << "\n"
         << "Total number of values entered " << total_values << "\n"
         << "The sum of all values " << sum << "\n";

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << "\n";
    }
    
}