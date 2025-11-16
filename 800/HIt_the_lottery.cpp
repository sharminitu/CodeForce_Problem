#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,n1,s=0;
    cin >> n;

    int arr[5]={100,20,10,5,1};

    for(int i=0;i<5;i++){

    n1=n/arr[i];
    s+=n1;
    n%=arr[i];
    
    }
    cout<<s<<endl;
    return 0;
}
