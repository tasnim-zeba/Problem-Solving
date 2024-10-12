#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fio
    ll t,n,k,i,j,r,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll p[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>p[i];
            if(p[i]==1)
            {
                r=i;
            }
        }
        c=1;
        for(i=r;i<=n;i++)
        {
            if(p[i]==c)
            {
                c++;
            }
        }
        ll x=(n-c)+1;
        if(x%k==0)
            {
                cout<<x/k<<endl;
            }
            else
            {
                cout<<(x/k)+1<<endl;
            }

    }
}


