#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,s1,s2,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        s1=s2=0;
        for(i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                s1++;
            }
            else
            {
                s2++;
            }
        }
        if(s1>=(n/2))
        {
            cout<<n/2<<endl;
            for(i=0;i<(n/2);i++)
            {
                cout<<0<<" ";
            }
            cout<<endl;
        }
        else
        {

            int m=n/2;
            if(m%2!=0)
            {
                cout<<m+1<<endl;
                for(i=0;i<m+1;i++)
                {
                cout<<1<<" ";
                }
            }
            else{
                    cout<<n/2<<endl;
                for(i=0;i<(n/2);i++)
            {
                cout<<1<<" ";
            }
            }

            cout<<endl;
        }
    }
    return 0;
}
