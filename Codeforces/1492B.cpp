#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,c,mx,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ///ll a[n+1],b[n+1];
        vector<ll>a(n),b(n);
        map<ll,ll>m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
            m[a[i]]=0;
        }
        sort(b.rbegin(),b.rend());
        mx=0;
        vector<ll>v;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]!=b[mx])
            {
                v.push_back(a[i]);
                m[a[i]]=1;
            }
            else{
                v.push_back(a[i]);
                m[a[i]]=1;
                for(j=v.size()-1;j>=0;j--)
                {
                    cout<<v[j]<<" ";
                }
                while(m[b[mx]]==1)
                {
                    mx++;
                    v.clear();
                }
                ///v.clear();
            }
        }
        for(j=v.size()-1;j>=0;j--)
                {
                    cout<<v[j]<<" ";
                }
                cout<<endl;

    }
    return 0;
}
