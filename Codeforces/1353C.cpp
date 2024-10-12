#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,d,s,i,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        d=n/2;
        s=0;
        for(i=1;i<=d;i++)
        {
            s=s+i*i*8;
        }
        cout<<s<<endl;
    }
}
