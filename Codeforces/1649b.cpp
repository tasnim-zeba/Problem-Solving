#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j;
    ll s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int mx=*max_element(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]==mx)
            {
                a[i]=0;
                break;
            }
        }
        s=0;
        for(i=0;i<n;i++)
        {
            s=s+a[i];
        }
        if(mx==0)
        {
            cout<<0<<endl;
        }
        else if(mx>s)
        {
            cout<<mx-s<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}
