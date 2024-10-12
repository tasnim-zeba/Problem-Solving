#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c,x,y,z,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>v;
        m=0;
        for(i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
                j=i;
                m=(n/i);
                break;
            }
        }
        for(i=2; i*i<=m; i++)
        {
            if(m%i==0&&(i!=j)&&((m/i)!=j))
            {
                v.push_back(i);
                v.push_back(m/i);
                break;
            }
        }
        if(v.size()==3)
        {
            if((v[0]==v[1])||(v[1]==v[2])||(v[0])==v[2])
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
