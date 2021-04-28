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
    ll N;
    deci arra[101][101];
    while (1)
    {
        cin >> N;
        if (cin.eof())
            return 0;
        arra[0][0] = 2;
        arra[0][N - 1] = 3;


        for (ll counter = 0; counter < N; counter++)
        {
            for (ll count = 0; count < N; count++)
            {
                cout << arra[counter][count];
            }
            cout << endl;
        }
    }
    return 0;
}