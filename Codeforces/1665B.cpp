#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll e,n,i,p,rec,ans;
    cin>>e;
    while(e--)
    {
        cin>>n;
        map<ll,ll>m;
        map<ll,ll>:: iterator it;
        for(i=0; i<n; i++)
        {
            cin>>p;
            m[p]++;
        }
        rec=INT_MIN;
        for(it=m.begin(); it!=m.end(); it++)
        {
            rec=max(rec,(it->second));
        }
        n=n-rec;
        ans=0;
        while(true)
        {
            if(n<=0)
            {
                break;
            }
            if(n>=rec)
            {
                ans=ans+(rec+1);
            }
            else
            {
                ans=ans+(n+1);
            }
            n=n-rec;
            rec=rec*2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
