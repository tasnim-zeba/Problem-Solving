#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    vector<int>v;
    for(i=2;i<=n;i++)
    {
        int f=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=0;
            }
        }
        if(f==1)
        {
            j=i;
            while(j<=n)
            {
                v.push_back(j);
                j=j*i;
            }
        }
    }
    cout<<v.size()<<endl;
    for(i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
