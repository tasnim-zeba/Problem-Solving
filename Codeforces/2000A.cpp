#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        if(n<3)
        {
            cout<<"NO"<<endl;
        }
        else if(s[0]=='1' && s[1]=='0'){
            if(n==3){
            if(s[2]=='0'||s[2]=='1')
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            if(s[2]=='0'){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
