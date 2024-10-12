#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<4)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<int>v;
        for(i=1;i<=n;i=i+2)
        {
            v.push_back(i);
        }
        if(n%2==0)
        {
            x=n;
        }
        else
        {
            x=n-1;
        }
        for(i=x;i>=1;i=i-2)
        {
            v.push_back(i);
        }
        if(n%2==0)
        {
            j=n/2;
            swap(v[j-1],v[j-2]);
        }
        else
        {
            j=n/2;
            swap(v[j+1],v[j+2]);
        }
        for(i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
