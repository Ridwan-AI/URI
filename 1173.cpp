#include <bits/stdc++.h>
#define ll long long int
#define deci double

using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll input;
    cin >> input;
    for (ll counter = 0; counter <= 9; counter++)
    {
        cout << "N[" << counter << "] = " << input << endl;
        input *= 2;
    }
    return 0;
}