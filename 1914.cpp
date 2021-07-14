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
    ll count;
    string name1, choice1, name2, choice2;
    ll N, M, total;
    cin >> count;
    for (size_t i = 0; i < count; i++)
    {
        cin >> name1 >> choice1 >> name2 >> choice2 >> N >> M;
        total = N + M;
        if (total % 2 == 0)
        {
            if (choice2 == "PAR")
                cout << name2 << "\n";
            else
                cout << name1 << "\n";
        }
        else
        {
            if (choice2 == "IMPAR")
                cout << name2 << "\n";
            else
                cout << name1 << "\n";
        }
    }
    return 0;
}