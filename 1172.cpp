#include <bits/stdc++.h>
#define ll long long int
#define deci double

using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll input[10];
    for (ll counter = 0; counter <= 9; counter++)
    {
        cin >> input[counter];
        if (input[counter] <= 0)
        {
            input[counter] = 1;
        } 
        cout << "X[" << counter << "] = " << input[counter] << endl;
    }
    return 0;
}