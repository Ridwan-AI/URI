#include <iostream>
#include <stdio.h>
#define ll long long int

using namespace std;

int main()
{
    ll length = 0, last1 = 1, last2 = 0, result = 0;
    cin >> length;
    cout << 0;
    for (int counter = 1; counter < length; counter++)
    {
        result = last1 + last2;
        cout << " " << result;
        if (counter>1)
        last2 = last1;
        last1 = result;
    }
    cout << endl;
    return 0;
}