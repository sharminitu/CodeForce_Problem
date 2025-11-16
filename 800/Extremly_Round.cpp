// #include <bits/stdc++.h>
// using namespace std;
// bool check(long long x){
//     long long number_of_zeros = 0;
//     long long number_of_digit = 0;

//     while(x){
//         if(x%10==0){
//             number_of_zeros++;
//         }
//             number_of_digit++;
//             x/=10;

//     }
//     return number_of_zeros == (number_of_digit - 1);
// }

// int main()
// {
//     vector<long long>round_number;
//     for(int i=1;i<=999999;i++){
//         if(check(i)==true){
//             round_number.push_back(i);
//         }
//     }
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin>>n;

//         long long ans =0;

//         for(int i=0;i<round_number.size();i++){

//             if(round_number[i]<=n){
//                 ans++;
//             }
//             else{
//                 break;
//             }
//         }
//         cout<<ans<<endl;
//     }

//     return 0;
// }



//another method 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s = to_string(n);

        int number_of_digit = s.size();

        int first_digit = s[0]-'0';

        int ans = 9*(number_of_digit-1) + first_digit;// ans = 9*(d-1)+f

        cout<<ans<<endl;
    }
    return 0;
}