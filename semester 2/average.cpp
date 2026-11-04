#include <iostream>
using namespace std;

int main()
{
    float num, countNums = 1, sum = 0;
    float average;
    cout << "enter number: ";
    cin >> num;
    cout << "average of numbers {";
    for (;; countNums++)
    {
        sum += countNums; // countNum does 2 jobs 1- used to increment until it is equal to (num) 2- used to find number of numbers so we can divide sum by it and get average

        cout << countNums << (countNums != num ? ", " : "} is: "); // if it reaches num is doesn't print ", " instead it prints nothing

        if (countNums == num) // so countNum does not increment one more time
            break;
    }
    average = sum / countNums;
    cout << average;
    return 0;
}