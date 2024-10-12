#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c,mn;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        mn=LONG_MAX;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]<=mn)
            {
                mn=a[i];
                j=i;
            }
        }
        c=mn;
        cout<<n-1<<endl;
        for(i=j;i<n;i++)
        {
            cout<<j<<" "<<i+1<<" "<<mn<<" "<<c+1<<endl;
            /*a[j]=mn;
            a[i+1]=c+1;*/
            c++;
        }
        c=mn;
        for(i=j;i>1;i--)
        {
            cout<<j<<" "<<i-1<<" "<<mn<<" "<<c+1<<endl;
            /*a[j]=mn;
            a[i-1]=c+1;*/
            c++;

        }
       /* for(i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;*/
    }
    return 0;
}
