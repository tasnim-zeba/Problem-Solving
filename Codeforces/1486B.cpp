#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i,j,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a1[n+1],a2[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a1[i]>>a2[i];
        }
        sort(a1,a1+n);
        sort(a2,a2+n);
        if(n%2)
        {
            cout<<1<<endl;
        }
        else
        {
            j=n/2;
            cout<<(a1[j]-a1[j-1]+1)*(a2[j]-a2[j-1]+1)<<endl;
        }
    }
}
