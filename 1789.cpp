#include <bits/stdc++.h>
#define ll int_fast64_t
#define ull uint_fast64_t
#define deci long double
using namespace std;

int main(void)
{
    ll L, large, temp;
    while (1)
    {
        large = 0;
        cin >> L;
        if (cin.eof())
            return 0;
        for (ll counter = 1; counter <= L; counter++)
        {
            cin >> temp;
            if (temp > large)
                large = temp;
        }
        if (large >= 20)
            cout << 3 << endl;
        else if (large < 10)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }
}