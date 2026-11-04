#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "printing terms for 2^(k) starting from k=0 until k=n" << endl;
    cout << "enter (n) number of terms: ";
    cin >> n;
    for (int k = 0; k < n; k++)
        cout << pow(2, k) << (k != (n - 1) ? ", " : ""); // if k is equal to n-1 (yes n-1 cuz k is starting from 0) then print nothing after pow(2,n-1)

    return 0;
}