#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll c=0;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(x==1)c++;
        }
        cout<<((c+1)/2)+(n-c)<<endl;
    }
}
