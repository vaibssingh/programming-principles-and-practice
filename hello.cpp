// #include "std_lib_facilities.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
// inline void keep_window_open() { char ch; cin>>ch; }
inline void simple_error(string s)	// write ``error: s�� and exit program
{
	cerr << "error: " << s << '\n';
	// keep_window_open();		// for some Windows environments
	exit(1);
}

int main() // C++ programs start by executing the function main
{
    cout << "Enter the name of the person you want to write to\n";
    string first_name; // first_name is a variable of type string
    cin >> first_name; // read characters into first_name
    cout << "Dear " << first_name << ",\n";
    cout <<" How are you? I am fine\n";
    cout << "Enter your friends name:";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";
    cout << "Enter 'm' if your friend is male, else enter 'f'\n";
    char friend_sex = 0;
    cin >> friend_sex;
    if (friend_sex == 'm') {
        cout << "If you see "<< friend_name << " please ask him to call me\n";
    }
    if (friend_sex == 'f') {
        cout << "If you see " << friend_name << " please ask her to call me\n";
    }
    cout << "Enter you friends age:\n";
    int age;
    cin >> age;
    if (age < 0 || age > 110) {
        simple_error("You are kidding!");
    }
    cout << "I heard you just had a bday and you are " << age << " years old\n";
    if(age < 12) {
        cout << "Next year you will be " << age + 1;
    }
    else if (age == 17) {
        /* code */
        cout << "Next year you will be able to vote\n";
    }
    else if (age > 70) {
        /* code */
        cout << "Enjoy your retirement\n";
    }
    cout << "Yours sincerely,\n\n\n" << "Vaibhav";
}