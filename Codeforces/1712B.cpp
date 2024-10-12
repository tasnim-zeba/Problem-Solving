#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        for(i=1; i<=n; i++)
        {
            v.push_back(i);
        }
        if(n%2)
        {
            for(i=1; i<n-1; i+=2)
            {
                swap(v[i],v[i+1]);
            }
        }
        else
        {
            for(i=0; i<n-1; i+=2)
            {
                swap(v[i],v[i+1]);
            }
        }

        ///cout<<1<<endl;
        for(i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

