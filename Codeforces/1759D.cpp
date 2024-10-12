#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v;
int main()
{
    ll t,n,m,i,j,mx,c2,c5,tn,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        c2=c5=0;
        tn=n;
        while(tn%2==0)
        {
            c2++;
            tn=tn/2;
        }
         tn=n;
        while(tn%5==0)
        {
            c5++;
            tn=tn/5;
        }
        x=1;
        if(c2<c5)
        {
            ll d=c5-c2;
            while((x*2)<=m)
            {
                if(d==0)break;
                x=x*2;
                d--;
            }
        }
        else if(c2>c5)
        {
            ll d=c2-c5;
            while((x*5)<=m)
            {
                if(d==0)break;
                x=x*5;
                d--;
            }
        }
        while((x*10)<=m)
        {
            x=x*10;
        }
        ll k=(m/x)*x;
        cout<<n*k<<endl;
    }
}
