#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,x,y,z,p,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<int>v;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                x=abs(1-i)+abs(1-j);
                y=abs(1-i)+abs(m-j);
                z=abs(n-i)+abs(1-j);
                p=abs(n-i)+abs(m-j);
                ans=max(x,max(y,max(z,p)));
                v.push_back(ans);
            }
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
