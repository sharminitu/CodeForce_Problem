#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int give[150];
    int got [150];
    for (int i = 1; i <=n; i++)
    {
        cin >> give[i];
        got[give[i]] =i;
    }

    for (int i = 1; i <=n; i++)
    {
      cout<<got[i]<<" ";
    }

    cout <<endl;

    return 0;
}