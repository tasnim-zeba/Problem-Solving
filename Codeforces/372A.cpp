#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,c,s=0,mx;
    cin>>n;
    ll a[n+1];
    vector<ll>v;
    s=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
        v.push_back(s);
    }
    vector<ll>ans;
    for(i=0;i<n;i++){
            c=0;
        for(j=i;j<n;j++){
                if(i==0)
                {
                    c=v[n-1]-v[j];
            c=c+(j-i+1)-(v[j]);
                }
                else
                {
                     c=v[i-1]+v[n-1]-v[j];
            c=c+(j-i+1)-(v[j]-v[i-1]);
                }
            ans.push_back(c);
        }
    }
    mx=*max_element(ans.begin(),ans.end());
    cout<<mx<<endl;
    return 0;
}

