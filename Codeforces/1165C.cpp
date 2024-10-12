#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,j,c;
    cin>>n;
    int a[n+5];
    for(i=0;i<=n;i++)
    {
        a[i]=-1;
    }
    c=1;
    for(i=2;i<=n;i++)
    {
        if(a[i]!=-1)continue;
        for(j=i;j<=n;j=j+i)
        {
            if(a[j]==-1)
            {
                a[j]=c;
            }
        }
        c++;
    }
    for(i=2;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
