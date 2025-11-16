#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        vector<long long>v;

        long long x =11;

        while(x<=n){
            if(n%x==0){
                v.push_back((n/x));
            }
            x = (x-1)*10+1;
        }

        cout<<v.size()<<endl;

        sort(v.begin(),v.end());
        for(auto y :v){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;
}