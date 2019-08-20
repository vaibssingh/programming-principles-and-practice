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
    vector<double> distances;
    double sum = 0;
    cout << "Enter the distances ";
    for (double temp; cin >> temp;)
        distances.push_back(temp);
    for (int i = 0; i < distances.size(); i++)
    {
        sum += distances[i];
    }
    sort(distances);
    double smallest_distance = 0;
    double largest_distance = 0;
    double mean_distance = 0;
    smallest_distance = distances[1] - distances[0];
    largest_distance = distances[distances.size() - 1] - distances[0];
    mean_distance = sum / distances.size();
    cout << "Smallest distance between two cities " << smallest_distance << "\n"
         << "Largest distance between two cities " << largest_distance << "\n"
         << "Mean distance between two cities " << mean_distance << "\n"
         << "Total distance of all cities: " << sum << "\n";

}