
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i,ans,p1,p2,p3,c;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ans=INT_MAX,p1=p2=p3=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                p1=i+1;
            }
            else if(s[i]=='2')
            {
                p2=i+1;
            }
            else if(s[i]=='3')
            {
                p3=i+1;
            }
            if(p1&&p2&&p3)
            {
                ll l,r;
                l=min(p1,min(p2,p3));
                r=max(p1,max(p2,p3));
                ans=min(ans,(r-l)+1);
            }
        }
        if(ans==INT_MAX)
        {
            cout<<0<<endl;
        }
        else{
            cout<<ans<<endl;
        }

    }
    return 0;
}
