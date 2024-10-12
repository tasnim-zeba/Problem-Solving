#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        int a,b,c1,c2,x;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(i==n)a=x;
            else
            {
                v.push_back(x);
            }
        }
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(i==n)b=x;
            else
            {
                v.push_back(x);
            }
        }
        sort(v.begin(),v.end());
        if(a>b)swap(a,b);
        c1=c2=0;
        for(i=0;i<v.size();i++)
        {
            if(v[i]<=a&&c1<(n-1))c1++;
            else if(v[i]<=b)c2++;
        }
        if(c1>=(n-1)&&c2>=(n-1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
