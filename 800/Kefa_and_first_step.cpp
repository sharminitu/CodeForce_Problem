#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int cnt = 1, max_len = 1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

  
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]<=a[i+1]){
            cnt++;
        }
        else{
            max_len = max(max_len, cnt);
            cnt = 1;
    }
    }
    max_len = max(max_len, cnt);

    cout<<max_len<<endl;
}