#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a,x,l=INT_MIN,r=INT_MAX;
        vector<int>v;
        while(n--)
        {
            cin>>a>>x;
            if(a==1)
            {
                l=max(l,x);
            }
            else if(a==2)
            {
                r=min(r,x);
            }
            else
            {
                v.push_back(x);
            }
        }
        //cout<<l<<" "<<r<<endl;
        int s=r-l+1;
        for(i=0;i<v.size();i++)
        {
            if(v[i]>=l&&v[i]<=r)s--;
        }
        s=max(0,s);
        cout<<s<<endl;
    }
}
