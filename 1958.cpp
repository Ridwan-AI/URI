#include <bits/stdc++.h>
#define ll int_fast64_t
#define ull uint_fast64_t
#define deci long double
using namespace std;

int main(void)
{
    deci X;
    ostringstream out;
    string final;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    out << showpos << scientific << setprecision(4);
    cin >> X;
    out << X;
    final = out.str();
    for (size_t i = 0; i < final.length(); i++)
    {
        if (final[i] == 'e')
            final[i] = 'E';
    }

    cout << final << endl;
    return 0;
}