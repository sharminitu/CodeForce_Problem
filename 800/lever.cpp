#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
   
    while(t--){

        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int c=1;
    for (int i = 0; i < n; i++)
    {
     
        if(a[i]>b[i]){
            c +=abs(a[i]-b[i]);
        }
    }
    cout << c << endl;
}
    return 0;
   
}33