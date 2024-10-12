#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,x,i,j,sp,sn,nf,pf;
    cin>>t;
    vector<ll>p,n;
    sp=sn=0;
    while(t--)
    {
        cin>>x;
        if(x<0)
        {
            n.push_back(x*(-1));
            sn+=(x*(-1));
        }
        else
        {
            p.push_back(x);
            sp+=x;
        }
    }
    if(sp>sn)
    {
         cout<<"first"<<endl;
         return 0;
    }
    else if(sp<sn)
    {
         cout<<"second"<<endl;
         return 0;
    }
    for(i=0,j=0; i<p.size()&&j<n.size(); i++,j++)
    {
        if(p[i]>n[j])
        {
            cout<<"first"<<endl;
            return 0;
        }
        else if(p[i]<n[j])
        {
            cout<<"second"<<endl;
            return 0;
        }
    }
    if(x<0)
    {
        cout<<"second"<<endl;
    }
    else
    {
        cout<<"first"<<endl;
    }
}
