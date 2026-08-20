#include <iostream>
using namespace std;

// Write a recursive function to convert a decimal number to its binary representation.

void binary(int x)
{
    if (x == 0)
        return;

    binary(x / 2);
    cout << x % 2;
}

int main()
{
    int x;
    cin >> x;

    binary(x);

    return 0;
}