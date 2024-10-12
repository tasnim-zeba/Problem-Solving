#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,c,ans;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        ans=0,c=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                c++;
            }
            else if(s[i]==')')
            {
                if(c==0)
                {
                    ans++;
                }
                else{
                    c--;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
