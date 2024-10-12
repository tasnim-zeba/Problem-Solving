#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i,j,n,c1,c2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        c1=c2=0;
        for(i=1;i<n;i++)
        {
            if(c1)
            {
                if(a[i]<a[i-1])
                {
                    c2=1;
                }
            }
            else if(a[i]>a[i-1])
            {
                c1=1;
            }
        }
        if(c2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}

