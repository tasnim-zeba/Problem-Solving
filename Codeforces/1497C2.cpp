#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        c=k-3;
        vector<int>v;
        for(i=1;i<=c;i++)
        {
            v.push_back(1);
        }
        n=n-c;
        if(n%4==0)
        {
            v.push_back(n/2);
            v.push_back(n/4);
            v.push_back(n/4);
        }
        else if(n%2==0)
        {
            v.push_back(2);
            n=n-2;
            v.push_back(n/2);
            v.push_back(n/2);
        }
        else
        {
            v.push_back(1);
            n--;
            v.push_back(n/2);
            v.push_back(n/2);
        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
