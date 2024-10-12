#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll islucky(ll n,ll d)
{
    ll r;
    while(n>0)
    {
        r=n%10;
        if(r==d)
        {
            return 1;
        }
        n=n/10;
    }
    return 0;
}
int main()
{
    ll t,q,d,i,x,j,c;
    cin>>t;
    while(t--)
    {
        cin>>q>>d;
        for(i=0;i<q;i++)
        {
            cin>>x;
            if(x>=d*10)
            {
                cout<<"YES"<<endl;
            }
            else{
                    c=0;
                while(1)
                {
                    if(x<=0)
                    {
                        break;
                    }
                    if(islucky(x,d))
                    {
                        c=1;
                        break;
                    }
                    x=x-d;
                }
                if(c==1)
                {
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }

    }
    return 0;
}
