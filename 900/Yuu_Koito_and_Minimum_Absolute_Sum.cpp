#include <bits/stdc++.h>
using namespace std;
void sharmin()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if(a[0]==-1&&a[n-1]==-1){
        a[0] = 0;
        a[n-1] =0;
    }

    else if(a[0]==-1){
        a[0] = a[n-1];
    }
    else if(a[n-1]==-1){
        a[n-1] = a[0];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]==-1){
            a[i]=0;
        }
    }

  
    long long diff = llabs(a[n-1]-a[0]);

    cout<<diff<<endl;

    for(int i=0;i<n;i++){
        cout<<a[i]<<" \n"[i==n-1];
    }
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        sharmin();

    return 0;
}