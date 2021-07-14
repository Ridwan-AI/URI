#include <bits/stdc++.h>
#define ll int_fast64_t
#define ull uint_fast64_t
#define deci long double
using namespace std;

ll T, arr[1000];

void fill()
{
    ll mc = 0;
    while (mc < 1000)
    {
        for (ll counter = 0; counter < T; counter++)
        {
            arr[mc] = counter;
            mc++;
        }
    }
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(0);
    cin >> T;
    fill();
    for (ll counter = 0; counter <= 999; counter++)
    {
        cout << "N[" << counter << "] = " << arr[counter] << endl;
    }
    return 0;
}