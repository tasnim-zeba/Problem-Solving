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
        for(i=n;i>=1;i++)
        {
            v.push_back(i);
        }
        /*for(i=0;i<n-1;i++)
        {
            if(v[i]%(i+1)==0||(i+1)%v[i]==0)
            {
                swap(v[i],v[i+1]);
            }
        }*/
        cout<<1<<endl;
        for(i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

