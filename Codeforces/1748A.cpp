#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)cout<<(n/2)<<endl;
        else cout<<(n/2)+1<<endl;
    }
}
