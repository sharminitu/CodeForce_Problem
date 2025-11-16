 // codeforces.com/contest/2149/problem/C

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;


    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];

        int c =0;
        vector<int>s(n+1);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<k){
            s[a[i]]++;
            }
            if (a[i] == k)
            {
                c++;
            }
        }
        int c1=0;
        for (int i = 0; i < k; i++)
        {
            if(s[i]==0){
                c1++;
            }
        }
        cout<<max(c1,c)<<endl;
    }
}