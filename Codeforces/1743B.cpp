#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        for(i=1;i<=n;i++)
        {
            v.push_back(i);
        }
       swap(v[n-1],v[1]);
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
