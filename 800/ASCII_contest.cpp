#include<bits/stdc++.h>
using namespace std;
int main(){
    int g,c,l;
    cin>>g>>c>>l;

    vector<int>v;
    v.push_back(g);
    v.push_back(c);
    v.push_back(l);

    int mx = *max_element(v.begin(),v.end());
    int mn = *min_element(v.begin(),v.end());

    sort(v.rbegin(),v.rend());

    if((mx-mn)>=10){
        cout << "check again"<<endl;
    }
    else{
        cout<<"final "<<v[1]<<endl;
    }

}