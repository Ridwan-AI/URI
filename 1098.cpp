#include <iostream>
#include <stdio.h>
#define ll float

using namespace std;

int main()
{
    ll j, i;
    for (i = 0.0; i <= 2.1; i += 0.2)
    {
        j = (1+i);
        for (ll count=1; count <= 3; count++)
        {
            cout << "I=" << i << " J=" << j << endl;
            j++;
        }
    }
    return 0;
}