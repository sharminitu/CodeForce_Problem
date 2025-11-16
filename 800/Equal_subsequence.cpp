#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        for(int i=0;i<a-b;i++){
            cout<<'0';
        }
        for(int i=0;i<b;i++){
            cout << "1";
        }
        cout<<endl;
        
    }

    return 0;
}