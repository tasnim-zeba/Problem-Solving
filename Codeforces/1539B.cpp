#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,q,l,r,i,c;
    cin>>n>>q;
    string s;
    cin>>s;
    ll a[n+1]={0};
    c=0;
    a[0]=(int)(s[0]-'a')+1;
    for(i=1;i<n;i++)
    {
        a[i]=a[i-1]+(int)(s[i]-'a')+1;
    }
    while(q--)
    {
        cin>>l>>r;
        c=a[r-1];
        if(l>1)
        {
            c=c-a[l-2];
        }
        cout<<c<<endl;
    }
    return 0;
}
