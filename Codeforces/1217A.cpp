#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,s,i,e,d;
    cin>>t;
    while(t--)
    {
        cin>>s>>i>>e;
        if(e==0)
        {
            if(s>i)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else if(s<i)
        {
            if((i-s)>=e)
            {
                cout<<0<<endl;
            }
            else
            {
                e=e-(i-s);
                if(e%2==0)
                {
                    cout<<e/2<<endl;
                }
                else
                {
                    cout<<(e/2)+1<<endl;
                }
            }
        }
        else if(s==i)
        {
            if(e%2==0)
            {
                cout<<(e/2)<<endl;
            }
            else
            {
                cout<<(e/2)+1<<endl;
            }
        }
        else
        {
            d=s-i;
            if(e<=d)
            {
                cout<<e<<endl;
            }
            else
            {
                if(e%2==0)
                {
                    cout<<(e/2)+1+max(0ll,d-(e/2))<<endl;
                }
                else
                {
                    cout<<(e/2)+max(0ll,d-2)<<endl;
                }
            }
        }
    }
    return 0;
}
