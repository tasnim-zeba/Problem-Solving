#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        else if(n==2)
        {
            cout<<2<<" "<<1<<endl;
            continue;

        }
        vector<ll>v;
        for(i=n;i>=1;i--)
        {
            v.push_back(i);
        }
        for(i=1;i<n;i++)
        {
            if(v[i]%(i+1)==0)
            {
                swap(v[i],v[i+1]);

            }
        }
        for(i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
