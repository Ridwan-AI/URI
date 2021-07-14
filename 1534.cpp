#include <bits/stdc++.h>
#define ll int_fast64_t
#define ull uint_fast64_t
#define deci long double
using namespace std;

int main(void)
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout << fixed << setprecision(0);
    ll N;
    while (1)
    {
        cin >> N;
        if (cin.eof()) break;
        ll arr[N][N];
        for (ll c1 = 0; c1 < N; c1++)
        {
            for (ll c2 = 0; c2 < N; c2++)
            {
                arr[c1][c2]=3;
            }
        }
        for (ll c1= 0; c1 < N; c1++)
        {
            arr[c1][c1]=1;
        }
        for (ll c1 = 0, c2=(N-1); c1 < N; c1++, c2--)
        {
            arr[c1][c2] = 2;
        }
        for (ll c1 = 0; c1 < N; c1++)
        {
            for (ll c2 = 0; c2 < N; c2++)
            {
                cout << arr[c1][c2];
            }
            cout << endl;
        }
    }
    return 0;
}