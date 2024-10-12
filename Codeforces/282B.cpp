#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,x,y,z;
    cin>>n;
    z=0;
    string s="";
    while(n--)
    {
        cin>>x>>y;
        if((z+x)<=500)
        {
            z=z+x;
            s=s+'A';
        }
        else
        {
            z=z-y;
            s=s+'G';
        }
    }
    cout<<s<<endl;
    return 0;
}
