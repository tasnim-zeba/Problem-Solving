#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,s,c,mn;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        c=s=0;
        mn=INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)c++;
            if(a[i]<0)a[i]=a[i]*(-1);
            mn=min(mn,a[i]);
            s+=a[i];
        }
        if(c%2==0)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s-2*mn<<endl;
        }
    }
}
