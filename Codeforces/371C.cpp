#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll nb,ns,nc,pb,ps,pc,i,j,r,l,x,m,n,b,c,s,d,rs;
    string st;
    cin>>st;
    n=st.size();
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>rs;
    b=c=s=0;
    for(i=0;i<n;i++)
    {
        if(st[i]=='B')b++;
        else if(st[i]=='C')c++;
        else s++;
    }
    l=0,r=1e13;
    x=0;
    while(l<=r)
    {
        ///cout<<m<<endl;
        m=(l+r)/2;
        d=0;
        if((((m*b)-nb)*pb)>=0)d=d+(((m*b)-nb)*pb);
        if((((m*c)-nc)*pc)>=0)d=d+(((m*c)-nc)*pc);
        if((((m*s)-ns)*ps)>=0)d=d+(((m*s)-ns)*ps);
        if(d<=rs)
        {
           /// cout<<x<<endl;
            x=max(x,m);
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    cout<<x<<endl;
}
