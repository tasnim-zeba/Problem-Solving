#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 int prime[1000006];
 vector<ll>v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll m=1000005;
    vector<ll>prime(m+1,1);
    prime[0]=0;
    prime[1]=0;
    for(ll i=2;i*i<=m;i++)
    {
        if(!prime[i])continue;
        for(ll j=i*i;j<=m;j=j+i)
        {
            prime[j]=0;
        }
    }
   // cout<<prime[5]<<endl;
    v.push_back(2);
    v.push_back(3);
    int c=0;
    for(int i=2; i<=1000000; i++)
    {
        if(prime[i])
        {
            c++;
            v.push_back(i);
            continue;
        }
        for(int j=2; j*j<=i; j++)
        {
            c++;
            if(i%j==0)
            {
                 v.push_back(j);
                break;
            }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        ///cout<<v[i]<<" ";
    }
   /// cout<<c<<endl;
   ll t,n,k;
   cin>>t;
   while(t--)
   {
       cin>>n>>k;
       if(n%2==0)
       {
           cout<<n+2*k<<endl;
       }
       else
       {
           cout<<n+v[n]+2*(k-1)<<endl;
       }
   }
    return 0;
}
