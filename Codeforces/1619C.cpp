#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,a,s,i,j,n,rs,ra,rn,c,f,r,c1,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>s;
        n=0,f=1,k=0,c1=0;
        while(s!=0||a!=0)
        {
            rs=s%10;
            ra=a%10;
            if(rs<ra)
            {
                rs=s%100;
                s=s/10;
                if(rs<ra)
                {
                    f=0;
                    break;
                }
            }
            if(rs>18)
            {
                f=0;
                break;
            }
            s=s/10;
            a=a/10;
            rn=rs-ra;
            if(rn>0&&k!=-1)
            {
                k=1;
            }
            if(k==0)
            {
                if(rn==0)
                {
                    c1++;
                }
            }
            if(c1>0)
            {
                if(rn>0)
                {
                    k=-1;
                }
            }
            n=n*10+rn;
            if(s==0&&a!=0)
            {
                f=0;
                break;
            }
        }
        if(f==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            c=0;
            while(n!=0)
            {
                r=n%10;
                c=c*10+r;
                n=n/10;
            }
            ll p=1;
            while(c1--)
            {
                p=p*10;
            }
            if(k==-1)
            {
                c=c*p;
            }
            cout<<c<<endl;
        }
    }
}
