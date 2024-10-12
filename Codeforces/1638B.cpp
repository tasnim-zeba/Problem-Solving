#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool func(ll a[],ll n)
{
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            return false;
        }
    }
    return true;
}
bool func1(vector<ll>v,ll n)
{
    for(int i=0; i<n-1; i++)
    {
        if(v[i]>v[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ll t,n,i,j,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        vector<ll>ev;
        vector<ll>od;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                ev.push_back(a[i]);
            }
            else
            {
                od.push_back(a[i]);
            }
        }
        if(func(a,n))
        {
            cout<<"YES"<<endl;
        }
        else if(ev.size()==0||od.size()==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(func1(ev,ev.size())&&func1(od,od.size()))
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}
