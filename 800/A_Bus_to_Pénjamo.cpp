#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, sum = 0, pairs = 0, single = 0, SumPairs = 0;
        cin >> n >> r;
        int arr[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            pairs = arr[i] / 2;
            single += arr[i] % 2;
            SumPairs += pairs;
        }
        int remain = r - SumPairs;

        if (remain >= single)
        {
            cout << sum << endl;
        }
        else
        {
            cout << (SumPairs * 2) + single - (2 * (single - remain)) << endl;
        }
    }

    return 0;
}