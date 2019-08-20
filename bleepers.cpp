#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    vector<string> disliked = {"asd", "qwe", "zxc"};
    cout << "Enter some words " << endl;
    string word;
    cin >> word;

    for (int i = 0; i < disliked.size(); i++)
    {
        if (word == disliked[i])
        {
            cout << "BLEEP!\n";
        }
        // else
        // {
        //     cout << word;
        // }
    }
    cout << word;
}