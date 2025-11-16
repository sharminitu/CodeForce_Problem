#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        long long a,b;
        cin>>a>>b;

        long long c=a%b;

        if(c!=0){
            cout<<b-c<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}