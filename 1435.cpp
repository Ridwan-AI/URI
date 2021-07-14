#include <bits/stdc++.h>
#define ll int_fast64_t
#define ull uint_fast64_t
#define deci long double
using namespace std;

int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int main(void)
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout << fixed << setprecision(1);
    deci N, center;
    ll square[1000][1000];
    while (1)
    {
        cin >> N;
        if (N == 0)
            return 0;
        center = ceil(N / 2);
        cout << right;
        int width = 1 + countDigit(center);
        for (ll counter = 0; counter <= center; counter++)
        {
            for (ll count = 0; count < N; count++)
            {
                square[counter][count] = 1 + count - counter;
            }
        }
        for (ll counter = N; counter > center; counter--)
        {
            for (ll count = N; count >= 0; count--)
            {
                square[counter][count] = (N-counter);
            }
        }
        for (ll counter = 0; counter < N; counter++)
        {
            for (ll count = 0; count < N; count++)
            {
                cout << setw(width) << square[counter][count] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}