#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,i,j,c0;
    string s;
    cin>>n;
        cin>>s;
        c0=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                c0++;
            }
        }
        if(c0%2==0||c0==1)
        {
            cout<<"BOB"<<endl;
        }
        else{
             cout<<"ALICE"<<endl;
        }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
