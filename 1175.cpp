#include <bits/stdc++.h>
#define ll long long int
#define deci long double

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N[20];
    for (ll counter = 0; counter <= 19; counter++)
    {
        cin >> N[counter];
    }
    reverse(N, N+20);
    for (ll counter = 0; counter <= 19; counter++)
    {
        cout << "N[" << counter << "] = " << N[counter] << endl;
    }
    return 0;
}