#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string s;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> s;
            }
        }

                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
    

                        if (s[i] == 'A' && s[i + 1] == '?' && s[i + 2] == 'C' || s[i] == 'C' && s[i + 1] == '?' && s[i + 2] == 'A')
                        {
                            cout << "B" << endl;
                        }

                        else if (s[i] == 'A' && s[i + 1] == '?' && s[i + 2] == 'B' || s[i] == 'B' && s[i + 1] == '?' && s[i + 2] == 'A')
                        {
                            cout << "C" << endl;
                        }

                        else if (s[i] == 'C' && s[i + 1] == '?' && s[i + 2] == 'B' || s[i] == 'B' && s[i + 1] == '?' && s[i + 2] == 'A')
                        {
                            cout << "A" << endl;
                        }
                    }
                }
            }
            
        }