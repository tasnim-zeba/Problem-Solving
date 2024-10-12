#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c,f,p;
    cin>>n;
    int a[n+1],vis[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        vis[i]=0;
    }
    sort(a,a+n);
    j=1;
    c=0;
    while(1)
    {
        j=1;
        p=-1,f=0;
        for(i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                if(f<=a[i])
                {
                    f++;
                    j=0;
                    vis[i]=1;
                }
            }
        }
        if(j==1)
        {
            break;
        }
        c++;
    }
    cout<<c<<endl;

}
