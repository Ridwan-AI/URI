#include <bits/stdc++.h>
#define ll int_fast64_t
#define ull uint_fast64_t
#define deci long double

using namespace std;

ll countDigit(long long n)
{
    return floor(log10(n) + 1);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(1);
    ll N;
    double T, c;
    ll arra[100][100];
    while (cin >> N)
    {
        if (N == 0)
            return 0;

        arra[0][0] = 1;
        for (ll start = 2, counter = 1; start <= pow(2, (N - 1)); start *= 2, counter++)
        {
            arra[0][counter] = start;
        }
        for (ll a = 1; a < N; a++)
        {
            for (ll b = 0, num = arra[a - 1][1]; b < N; b++, num = num * 2)
            {
                arra[a][b] = num;
            }
        }
        for (ll a = 0; a < N; a++)
        {
            // T = 1 + countDigit((arra[N - 1][N - 1]));
            for (ll b = 0; b < N; b++)
            {
                T = countDigit((arra[N - 1][N - 1]));
                if (b != 0)
                {
                    T++;
                }

                for (c = countDigit((arra[a][b])); c < T; c++)
                {
                    cout << " ";
                }
                cout << arra[a][b];
            }
            cout << endl;
        }
        cout << endl;
    }
}