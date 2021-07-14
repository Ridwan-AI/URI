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
    bool works = 0;
    ll sides[4];
    cin >> sides[0] >> sides[1] >> sides[2] >> sides[3];
    sort(sides, sides + 4);
    for (size_t i = 0; i < 2; i++)
    {
        if (works == 1)
            break;
        else
        {
            if ((sides[i] + sides[i + 1]) > sides[i + 2])
            {
                cout << "S\n";
                works = 1;
            }
        }
    }
    if (works == 0)
        cout << "N\n";
    return 0;
}