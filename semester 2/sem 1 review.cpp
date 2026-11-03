#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int x;
    string sign;
    bool isnegative = 0;
    cout << "x: ";
    cin >> x;
    if (x < 0)
    {
        isnegative = 1;
        sign = "negative";
        x = abs(x);
    }
    if (x < 100 || x > 999)
        cout << "invalid input";
    else
    {
        int third = x / 100;
        int second = (x %100)/10;
    }
    return 0;
}
