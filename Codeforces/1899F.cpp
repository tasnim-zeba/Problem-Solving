#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,q,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        for(i=1;i<n;i++)
        {
            cout<<i<<" "<<i+1<<endl;
        }
        int c=n-1;
        int dis1=n-1,dis2=0;
        while(q--)
        {
            cin>>d;
            if(d==dis1||d==dis2)
            {
                cout<<-1<<" "<<-1<<" "<<-1<<endl;
            }
            else
            {
                cout<<n<<" "<<c<<" "<<d<<endl;
                dis1=d,dis2=n-d;
                c=d;
            }
        }
    }
}
