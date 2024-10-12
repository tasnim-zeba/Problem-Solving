#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        vector<int>v;
        for(i=9;i>=1;i--)
        {
            if(s==n)break;
            if((s+i)<=n)
            {
                s=s+i;
                v.push_back(i);
            }
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
        cout<<endl;
    }
}

