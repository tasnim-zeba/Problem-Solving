#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int f=0;
        while(x.size()<=100)
            {
                x=x+x;
            }
            int u=0;
            for(i=0;i<x.size();i++)
            {
                string h=x.substr(i,m);
                if(h==s)
                {
                    f=1;
                    u=i+m;
                    break;
                }
            }
            if(f==0)
            {
                cout<<-1<<endl;
            }
            else
            {
                int c=n,k=0;
                while(1)
                {
                    if(c<u)
                    {
                        c=c*2;
                        k++;
                    }
                    else
                    {
                        break;
                    }
                }
                cout<<k<<endl;
            }
    }
}
