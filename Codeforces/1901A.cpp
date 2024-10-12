#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        vector<int>v;
        v.push_back(0);
        for(i=1;i<=n;i++)
        {
            int y;
            cin>>y;
            v.push_back(y);
        }
        v.push_back(x);
        int mx=INT_MIN;
        for(i=0;i<v.size()-1;i++)
        {
            mx=max(mx,v[i+1]-v[i]);
            if(i==(v.size()-2))
            {
                mx=max(mx,2*(v[i+1]-v[i]));
            }
        }
        cout<<mx<<endl;
    }
}
