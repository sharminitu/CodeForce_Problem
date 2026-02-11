#include <bits/stdc++.h>
using namespace std;

long digsum(int n)
{
    long s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        while (digsum(n) % k)
        {
            ++n;
        }
        cout << n << endl;
    }
    return 0;
}