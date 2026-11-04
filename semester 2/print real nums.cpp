#include <iostream>
using namespace std;

int main()
{
    for (float i = 1; i <= 5; i += 0.5)
        cout << i << (i != 5 ? ", " : "");
    return 0;
}