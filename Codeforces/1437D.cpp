#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        vector<int>v;
        v.push_back(1);
        int c=0;
        for(i=2;i<=n;i++)
        {
            c=1;
            while(i+1<=n&&a[i]<a[i+1])
            {
                c++;
                i++;
            }
            v.push_back(c);
        }
        int ans=1,s=0;
        p=1,c=0;
        for(i=1;i<v.size();i++)
        {
            ///cout<<v[i]<<" ";
            if(c<p)
            {
                s=s+v[i];
                c++;
            }
            else
            {
                p=s;
                s=0;
                c=0;
                i--;
                if((i+1)<v.size())
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}
