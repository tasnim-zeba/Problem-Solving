#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll n,i,j,x,y,a,b;
    cin>>n;
    a=b=0;
    while(n--)
    {
        cin>>x>>y;
        if((a+x)-b<=500)
        {
            a=a+x;
            cout<<'A';
        }
        else
        {
            b=b+y;
            cout<<'G';
        }
    }
    return 0;
}

