#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,s;
    cin>>n;
    vector<int>v;
    s=0;
    for(i=1; ;i++)
    {
        if((s+i)>n)
        {
            v[v.size()-1]+=(n-s);
            s=n;
            break;
        }
        else if(s==n)break;
        v.push_back(i);
        s=s+i;
    }
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
