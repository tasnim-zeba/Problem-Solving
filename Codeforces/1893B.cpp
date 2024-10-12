#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n+1], b[m+1], suf[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        suf[n-1]=a[n-1];
        for(i=n-2;i>=0;i--)
        {
            suf[i]=max(suf[i+1],a[i]);
        }
        for(i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(b,b+m);
        reverse(b,b+m);
        vector<int>c;
        for(i=0,j=0;i<n;i++)
        {
            while(j<m&&b[j]>suf[i])
            {
                c.push_back(b[j]);
                j++;
            }
            c.push_back(a[i]);
        }
        for( ; j<m; j++)
        {
            c.push_back(b[j]);
        }
        for(i=0;i<c.size();i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}
