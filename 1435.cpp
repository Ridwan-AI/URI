#include <bits/stdc++.h>
#define ll int_fast64_t
#define ull uint_fast64_t
#define deci long double
using namespace std;

int main(void)
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cout << fixed << setprecision(1);
    ll size;
    cin >> size;
    ll center;
    while (size > 0)
    {
        for (int i = 1; i <= size; i++)
            for (int j = 1; j <= size; j++)
            {
                y = i - 1;
                yy = j - 1;
                c[i][j] = z;

                if (size > 2)
                {

                    if (i == j && i < size)
                    {
                        c[i][j] == z++;
                        z = 1;
                    }
                    else
                        c[i][j] == z;
                }
            }
        cin >> size;
    }
    return 0;
}