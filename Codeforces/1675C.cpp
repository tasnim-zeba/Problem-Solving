#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=s.size();
        if(s[n-1]=='1')
        {
            cout<<1<<endl;
            continue;
        }
        c=-1;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                c=i;
                break;
            }
        }
        if(c==-1)
        {
            ll ans=0;
            for(i=n-1;i>=0;i--)
            {
                if(s[i]!='?')
                {
                    ans++;
                    break;
                }
                else
                {
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
        else
        {
            ll ans=0;
            for(i=c;i>=0;i--)
            {
                if(s[i]=='1')
                {
                    ans++;
                    break;
                }
                else
                {
                    ans++;
                }
            }
             cout<<ans<<endl;
        }
    }
}
