#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ar[n+1];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        a=INT_MIN;
        b=INT_MAX;
        for(i=n-1;i>0;i--)
        {
            if(ar[i]>ar[i-1])
            {
                a=i;
                break;
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(ar[i]>ar[i+1])
            {
                b=i;
                break;
            }
        }
        if(a<=b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
