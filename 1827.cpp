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
    ll N, a, b;
    deci arra[105][105];
    while (1)
    {

        cin >> N;
        if (cin.eof())
            return 0;
        a = N;
        a--;
        for (ll counter = 0; counter < N; counter++)
        {
            for (ll count = 0; count < N; count++)
            {
                arra[counter][count] = 0;
                if (counter == count)
                {
                    arra[counter][count] = 2;
                }
                else if ((counter + count) == a)
                {
                    arra[counter][count] = 3;
                }
            }
        }
        if ((N % 3) == 0)
            a = (N / 3);
        else
            a = (N / 3);
        if ((N % 3) == 0)
            b = (2 * N / 3) - 1;
        else
            b = (2 * N / 3);
        for (ll counter = a; counter <= b; counter++)
        {
            for (ll count = a; count <= b; count++)
            {
                arra[counter][count] = 1;
                // cout << counter << " " << count << endl;
            }
        }
        arra[N / 2][N / 2] = 4;
        for (ll counter = 0; counter < N; counter++)
        {
            for (ll count = 0; count < N; count++)
            {
                cout << arra[counter][count];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}