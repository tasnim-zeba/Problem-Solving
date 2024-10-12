#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x,y,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        c=0;
        for(i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                c++;
            }
        }
        if(c%2)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(c==2)
            {
                int f=0;
                for(i=0;i<n;i++)
                {
                    if(s1[i]!=s2[i])
                    {
                        if(s1[i+1]!=s2[i+1])
                        {
                            f=1;
                            break;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                if(f)
                {
                    cout<<min(2*y,x)<<endl;
                    continue;
                }
            }
            cout<<(c/2)*y<<endl;
        }
    }
    return 0;
}
