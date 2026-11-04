#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (num < 0)
        cout << "negative number is not valid, try again";
    else
    {
        unsigned long long facc = 1;
        if (num == 0)
        {
        }
        else
        {
            for (int i = num; i > 0; i--)
                facc *= i;
        }
        cout << num << "!= " << facc;
    }
    return 0;
}