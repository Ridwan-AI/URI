#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    cout << fixed << setprecision(0);
    long t, n, k, largest, horse;
    cin >> t;
    for (long i = 0; i < t; i++)
    {
        cin >> n >> k;
        long a[n];
        largest = -9999;
        horse = 0;
        for (long count = 0; count < n; count++)
        {
            cin >> a[count];
            if (a[count] > largest)
            {
                largest = a[count];
                horse = count + 1;
            }
                }
        cout << i+1 << " " << horse << endl;
    }

    return 0;
}