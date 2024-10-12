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
       for(i=(n/2);i>=1;i--)
       {
           v.push_back(i);
           v.push_back(i+(n/2));
       }
       if(n%2)v.push_back(n);
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
