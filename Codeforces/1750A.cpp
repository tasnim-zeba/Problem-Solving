#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e,m,i;
    cin>>e;
    while(e--)
    {
        cin>>m;
        int x,c;
        c=1;
        for(i=1;i<=m;i++)
        {
            cin>>x;
            if(i==1)
            {
                if(x!=1)c=0;
            }
        }
        if(c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
