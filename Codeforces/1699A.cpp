#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        /*for(i=1; i<=m; i++)
        {
            if(i%2>=2)
            {
                cout<<0<<" ";
            }
            else
            {
                cout<<1<<" ";
            }
        }
        cout<<endl;
        */
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if((i%4)>=2)
                {
                    if((j%4)>=2)
                    {
                        cout<<1<<" ";
                    }
                    else
                    {
                        cout<<0<<" ";
                    }
                }
                else
                {
                    if((j%4)>=2)
                    {
                        cout<<0<<" ";
                    }
                    else
                    {
                        cout<<1<<" ";
                    }
                }
            }
            cout<<endl;
        }
    }
}
