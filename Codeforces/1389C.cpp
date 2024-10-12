#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,mx,f1,f2,k;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=s.size();
        map<char,ll>mp;
        for(i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        mx=INT_MIN;
        for(i=0;i<n;i++)
        {
            mx=max(mx,mp[s[i]]);
        }
        f1=f2=0;
        for(char c1='0';c1<='9';c1++)
        {
            for(char c2='0';c2<='9';c2++)
            {
                if(c1==c2)continue;
                f1=f2=0;
                for(i=0;i<n;i++)
                {
                    if(s[i]==c2&&f1)
                    {
                        f2=f2+2;
                        f1=0;
                    }
                    else if(s[i]==c1)
                    {
                        f1=1;
                    }
                }
                mx=max(mx,f2);
            }
            ///cout<<f2<<endl;

        }
        ///cout<<mx<<endl;
        cout<<n-mx<<endl;
    }
}
