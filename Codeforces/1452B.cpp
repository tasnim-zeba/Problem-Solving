#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,mx,s,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        mx=*max_element(a,a+n);
        s=0;
        for(i=0;i<n;i++)
        {
            s=s+(mx-a[i]);
        }
        c=1;
        if(mx%(n-1)==0)
        {
            c=0;
            sort(a,a+n);
            for(i=0;i<n-2;i++)
            {
                if(a[i]!=a[i+1])
                {
                    c=1;
                    break;
                }
            }
        }
        if(c==0)
        {
            cout<<0<<endl;
        }
        else if(mx>=s)
        {
            cout<<(n-1)-(mx-s)<<endl;
        }
        else
        {
            cout<<(s-mx)<<endl;
        }
    }
}
