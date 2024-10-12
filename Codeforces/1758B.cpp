#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        if(n%2)
        {
            for(i=1;i<=n;i++)
            {
                 v.push_back(1);
            }
        }
        else
        {
            for(i=1;i<=n-2;i++)
            {
                v.push_back(2);
            }
            v.push_back(1);
            v.push_back(3);
        }
        for(i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

