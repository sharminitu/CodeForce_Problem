#include<bits/stdc++.h>
using namespace std;
int  main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n,c;
        cin>>n>>c;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
            sort(a.rbegin(),a.rend());
            int cnt = 0;
            long long dbl = 1;
            for(int i=0;i<n;i++){    
            a[i]*=dbl;
            if(a[i]<=c){
                dbl*=2;
            }
            else{
                cnt++;
            } 
        }
        cout << cnt << endl;
     }
     return 0;
}