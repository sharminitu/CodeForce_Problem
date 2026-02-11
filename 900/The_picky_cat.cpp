#include<bits/stdc++.h>
using namespace std;
void sharmin(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

  int cnt =0;
   for(int i=0;i<n;i++){
    if(abs(a[i])<abs(a[0])){
        cnt++;
    }
   }

    if(cnt<=n/2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

 
}
int main(){
    int t;
    cin>>t;
    while(t--)
    sharmin();

    return 0;
}