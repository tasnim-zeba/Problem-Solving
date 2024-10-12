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
        vector<int>:: iterator it;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int c=1,c1=-1;
        cout<<0<<" ";
        while(v.size())
        {
            it=max_element(v.begin(),v.end());
            v.erase(it);
        }
    }
}
