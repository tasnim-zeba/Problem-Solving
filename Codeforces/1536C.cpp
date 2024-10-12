#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,ck,cd,g,x,y;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>n;
        cin>>s;
        map<pair<ll,ll>,ll>mp;
        ck=0;
        cd=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='D')
            {
                cd++;
            }
            else
            {
                ck++;
            }
            g=__gcd(cd,ck);
            x=cd/g;
            y=ck/g;
            cout<<mp[{x,y}]+1<<" ";
            mp[{x,y}]++;
        }
        cout<<endl;
    }
    return 0;
}
