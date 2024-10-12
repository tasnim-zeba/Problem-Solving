#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,x;
    cin>>n;
    vector<ll>v;
    vector<ll>:: iterator it;
    x=1;
    for(i=1;i<n;i++)
    {
        if(__gcd(n,i)==1)
        {
            v.push_back(i);
            x=(x*i)%n;
        }
    }
    for(i=v.size()-1;i>=0;i--)
    {
        if(x%n!=1)
        {
            x=x/v[i];
            it=find(v.begin(),v.end(),v[i]);
            v.erase(it);
        }else{
            break;
        }
    }
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
