#include <bits/stdc++.h>
using namespace std;

// Write a recursive function to calculate the sum of the digits of a number.

int add(int x)
{
    if (x == 0)
        return 0;

    return x % 10 + add(x / 10);
}

int main()
{
    int x;
    cin >> x;

    cout << add(x) << endl;

    return 0;
}