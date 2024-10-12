#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        i=0;
        j=1;
        while(j<=r)
        {
            i++;
            j=j*2;
        }
        cout<<i-1<<endl;
    }
}
