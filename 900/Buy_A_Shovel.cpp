#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r,c;
    cin>>k>>r;

    for(int i=1;i<=10;i++){
        c= k*i;

        if(c%10==0||c%10==r){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}