#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ///cout<<log2(1000000000)<<endl;
    ll t,n,a,b,c,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        c=0;
        if(a==1)
        {
            if(n%b==1)
            {
                cout<<"Yes"<<endl;
                continue;
            }
            else
            {
                cout<<"No"<<endl;
                continue;
            }
        }
        while(1)
        {
            if(b==1)
            {
                c=1;
                break;
            }
            if(n%b==1)
            {
                c=1;
                break;
            }
            if(n%a==0)
            {
               n=n/a;
            }
            else
            {
                n=n-b;
                if(n<0)break;
            }
        }
        ///cout<<c<<endl;
        if(c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}

