#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        x=n;
        for(int i=0;i<n;i++)
        {
            v.push_back(x);
            x--;
        }
        int n1=n;
        x=n-1;
        while(n1--)
        {
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
            swap(v[x-1],v[x]);
            x--;
        }
    }
    return 0;
}
