#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int square_by_addition(int x)
{
    int square;
    for (int i = 1; i <= x; i++)
    {
        square += x;
    }
    return square;
}

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << square_by_addition(i) << '\n';
    }
    
}