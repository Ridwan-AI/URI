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
    deci M[12][12];
    char O;
    cin >> O;
    for (ll row = 0; row < 12; row++)
        for (ll column = 11; column >= 0; column--)
            cin >> M[row][column];
    deci total = 0;
    for (ll row = 1; row <= 5; row++)
    {
        for (ll column = 0; column < row; column++)
        {
            total += M[row][column];
            // cout << M[row][column] << " ";
        }
        // cout << endl;
    }
    for (ll row = 10; row > 5; row--)
    {
        for (ll column = 0; column < (11 - row); column++)
        {
            total += M[row][column];
            // cout << M[row][column] << " ";
        }
        // cout << endl;
    }
    if (O == 'S')
        cout << total << endl;
    else
        cout << total / 30 << endl;
    return 0;
}