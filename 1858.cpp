#include <bits/stdc++.h>
#define ll int_fast64_t
#define ull uint_fast64_t
#define deci long double
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(0);
    ll N, small, total = 1;
    cin >> N;
    ll store[N];
    for (ll counter = 0; counter < N; counter++)
    {
        cin >> store[counter];
    }
    small = store[0];
    for (ll counter = 0; counter < N; counter++)
    {
        if (store[counter] < small)
        {
            small = store[counter];
            total = counter+1;
        }
    }
    cout << total << endl;
    return 0;
}