#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int x;
    string sign;
    cout << "Enter a three-digit number (positive or negative): ";
    cin >> x;
    if (x < 0)
    {
        sign = "negative";
        x = abs(x);
    }
    else if (x > 0)
    {
        sign = "positive";
    }
    if (x > 99 && x < 1000)
    {
        int first = x / 100;
        int second = (x % 100) / 10;
        int third = x % 10;

        cout << "Sign: " << sign << endl;
        cout << "First digit (hundreds): " << first << endl;
        cout << "Second digit (tens): " << second << endl;
        cout << "Third digit (units): " << third << endl;
    }
    else
        cout << "invalid input";
    return 0;
}
