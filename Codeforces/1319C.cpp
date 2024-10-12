#include<bits/stdc++.h>
using namespace std;
long long const M=1e9+7;
int main()
{
    long long n,i,j,ans,d;
    cin>>n;
    ans=1;
    d=1;
    for(i=1; i<=n; i++)
    {
        ans=(ans*i)%M;
    }
    for(i=1; i<n; i++)
    {
        d=(2LL*d)%M;
    }
    cout<<(ans-d+M)%M<<endl;

}
