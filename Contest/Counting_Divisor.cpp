// codeforces.com/problemset/problem/1878/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        long long n;
        cin >> n;
        int c=0;
        vector<int>v;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                v.push_back(i);
                if(i!=n/i){
                    v.push_back(n/i);
                }
            }
        }
        cout<<v.size()<<endl;
       
    }
}