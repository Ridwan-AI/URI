#include <bits/stdc++.h>
#define ll int_fast64_t
#define ull uint_fast64_t
#define deci long double
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(1);

    ll L;
    cin >> L;
    deci M[12][12];
    char T;
    cin >> T;
    for (ll first = 0; first < 12; first++)
    {
        for (ll second = 0; second < 12; second++)
        {
            cin >> M[first][second];
        }
    }
    deci total = 0;
    for (ll counter = 0; counter < 12; counter++)
    {
        total += M[counter][L];
    }
    if (T == 'S')
        cout << total << endl;
    else
    {
        total /= 12;
        cout << total << endl;
    }
    return 0;
}