#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,l,r,z,o;
    string s;
    cin>>n;
    cin>>s;
    z=o=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')z++;
        else o++;
    }
    l=(ll)pow(2,o);
    r=(ll)pow(2,n)-(ll)pow(2,z)+1;
    for(i=l;i<=r;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
