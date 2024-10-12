#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,e,o,mn1,mn2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        e=o=0;
        vector<ll>ve,vo;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0){
                e++;
                ve.push_back(a[i]);
            }
            else
            {
                o++;
                vo.push_back(a[i]);
            }
        }
        if(o%2==0)
        {
            cout<<0<<endl;
            continue;
        }
        //cout<<o<<endl;
        mn1=mn2=INT_MAX;
        for(i=0;i<vo.size();i++)
        {
            ll c=0;
            while(vo[i]%2!=0)
            {
                vo[i]=vo[i]/2;
                c++;
            }
            mn1=min(mn1,c);
        }
        for(i=0;i<ve.size();i++)
        {
            ll c=0;
            while(ve[i]%2==0)
            {
                ve[i]=ve[i]/2;
                c++;
            }
            mn2=min(mn2,c);
        }
        cout<<min(mn1,mn2)<<endl;
    }
}
