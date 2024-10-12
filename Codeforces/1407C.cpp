#include<bits/stdc++.h>
using namespace std;
int interact(int i,int j)
{
    cout<<"? "<<i+1<<" "<<j+1<<endl;
    int x;
    cin>>x;
    return x;
}
int main()
{
    int n,i,j;
    cin>>n;
    i=0;
    vector<int>p(n);
    for(j=1;j<n;j++)
    {
        int x=interact(i,j);
        int y=interact(j,i);
        if(y>x)
        {
            p[j]=y;
        }
        else
        {
            p[i]=x;
            i=j;
        }
    }
    p[i]=n;
    cout<<"! ";
    for(auto it:p)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
