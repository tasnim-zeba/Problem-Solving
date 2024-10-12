#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i,c,m;
    cin>>t;
    while(t--)
    {
        cin>>m;
        ll ar[m+1];
        c=0;
        for(i=0;i<m;i++)
        {
            cin>>ar[i];
            if(i>0&&i<m-1)
            {
                if(ar[i]!=1){
                   c=1;
                }
            }
        }
        int f=0;
        if(c==0)
        {
            cout<<-1<<endl;
            continue;
        }
        if(m==3&&ar[1]%2!=0)
        {
             cout<<-1<<endl;
            continue;
        }
        for(i=0;i<m;i++)
        {
            if(i>0&&i<m-1)
            {
                if(ar[i]%2!=0)
                {
                    ar[i]++;
                }
            }
        }
        ll arms=0;
        for(i=0;i<m;i++)
        {
            if(i>0&&i<m-1)
            {
                arms=arms+(ar[i]/2);
            }
        }
        cout<<arms<<endl;
    }
    return 0;
}

