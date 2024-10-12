#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    //fio
    ll t,n,k,i,j,r,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        r=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]==2)r++;
        }
        k=-1;
        j=0;
        for(i=1;i<n;i++)
        {
            if(a[i]==2)j++;
            if(j==(r-j))
            {
                k=i;
                break;
            }
        }
        cout<<k<<endl;
    }
}

