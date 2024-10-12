#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fio
    ll t,n,k,i,j,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        reverse(a,a+n);
        int f=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(a[0]==a[1])swap(a[1],a[n-1]);
        cout<<"YES"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}


