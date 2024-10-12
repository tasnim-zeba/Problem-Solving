#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,x,y,d,dis1,dis2;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x>>y>>d;
        int dis1=(n-x)+(m-y);
        if(dis1<=d)
        {
            cout<<-1<<endl;
        }
       else if((y-1)>d&&(n-x)>d)
       {
           cout<<n+m-2<<endl;
       }
       else if((x-1)>d&&(m-y)>d)
       {
           cout<<n+m-2<<endl;
       }
       else
       {
           cout<<-1<<endl;
       }
    }
}
