#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll power(ll b, ll p)
{
    ll x=1;
    for(ll i=1; i<=p; i++)
    {
        x=x*b;
    }
    return x;
}
int main()
{
    ll n, i, s, j;
    cin>>n;
    s=0;
    for(i=0; i<=30; i++)
    {
        s += 5*power(2LL, i);
         //cout<<s<<endl;
        if(s == n)
        {
            cout<< "Howard" <<endl;
            break;
        }
        else if(s > n)
        {
           s -= 5*power(2LL, i);
           ll d = n - s;
          // cout<<d<<endl;
            if(d <= power(2LL, i))cout<<"Sheldon"<<endl;
            else if(d <= 2*power(2LL, i))cout<<"Leonard"<<endl;
            else if(d <= 3*power(2LL, i))cout<<"Penny"<<endl;
            else if(d <= 4*power(2LL, i))cout<<"Rajesh"<<endl;
            else if(d <= 5*power(2LL, i))cout<<"Howard"<<endl;
            break;
        }
    }
}
