#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>a(n),b(n);
        multiset<int>ms;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            ms.insert(b[i]);
        }
        vector<int>mx,mn;
        for(i=0;i<n;i++)
        {
             int idx=lower_bound(b.begin(),b.end(),a[i])-b.begin();
             mn.push_back(b[idx]-a[i]);
        }
        for(i=n-1;i>=0;i--)
        {
           mx.push_back((*--ms.end())-a[i]);
           ms.erase(ms.lower_bound(a[i]));
        }
        for(i=0;i<n;i++)
        {
            cout<<mn[i]<<" ";
        }
        cout<<endl;
        for(i=n-1;i>=0;i--)
        {
           cout<<mx[i]<<" ";
        }
        cout<<endl;
    }
}
