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
    int first, second, third;
    cin >> first >> second >> third;

    if (second < first)
    {
        if (third >= second)
            cout << ":)";
        else if (third < second && (third - second) > (second - first))
            cout << ":)";
        else if (third < second && (third - second) <= (second - first))
            cout << ":(";
    }
    else if (second > first)
    {
        if (third <= second)
            cout << ":(";
        else if (third > second && (third - second) < (second - first))
            cout << ":(";
        else if (third > second && (third - second) >= (second - first))
            cout << ":)";
    }
    else
    {
        if (third > second)
            cout << ":)";
        else
            cout << ":(";
    }
    cout << endl;
    return 0;
}