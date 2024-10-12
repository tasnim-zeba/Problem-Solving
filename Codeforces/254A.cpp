#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,i,n1,x,k;
    cin>>n;
    n1=2*n;
    ll a[5003]={0};
    vector<int>v;
    for(i=1; i<=n1; i++)
    {
        cin>>x;
        if(a[x]==0)
        {
            a[x]=i;
        }
        else{
            v.push_back(i);
            v.push_back(a[x]);
            a[x]=0;
        }
    }
    x=1;
    if(v.size()!=n1)
    {
        x=0;
    }
    if(x==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(i=0;i<n1-1;i=i+2)
        {
            cout<<v[i]<<" "<<v[i+1]<<endl;
        }
    }
    return 0;
}
