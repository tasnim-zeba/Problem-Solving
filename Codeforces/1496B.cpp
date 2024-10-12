#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,mex,mx,j,l,x,c;
    double d;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        set<ll>s;
        set<ll>:: iterator it;
        mx=INT_MIN;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x>mx)
            {
                mx=x;
            }
            s.insert(x);
        }
        mex=mx+1;
        l=s.size();
        for(it=s.begin(),j=0;it!=s.end();it++,j++)
        {
            if(*it!=j)
            {
                mex=j;
                break;
            }
        }
        d=round((mx+mex)/2.0);
        c=0;
        for(it=s.begin();it!=s.end();it++)
        {
            if(*it==d)
            {
                c=1;
            }
        }
        if(c==1||k==0)
        {
            cout<<l<<endl;
        }
        else{
            if(mex==mx+1)
            {
                cout<<l+k<<endl;
            }
            else{
                cout<<l+1<<endl;
            }
        }
    }
    return 0;
}
