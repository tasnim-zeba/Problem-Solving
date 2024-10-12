
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,c,i,x;
    double d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        c=0;
        for(i=n-2;i>=0;i--)
        {
            if(a[i]>=a[i+1])
            {
                while(a[i]>=a[i+1])
                {
                    if(a[i]==0){
                        c=-1;
                        break;
                    }
                    x=a[i];
                    ///d=a[i]/2.0;
                    x=x/2;
                    a[i]=x;
                    c++;
                    /*if((a[i]==0))
                    {
                        c=-1;
                        break;
                    }*/
                }
            }
            if(c==-1)
            {
                break;
            }
        }
        cout<<c<<endl;
        /*for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }*/
    }
}
