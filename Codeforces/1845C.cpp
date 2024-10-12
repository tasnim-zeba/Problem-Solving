#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,m,st,f,n;
    string s,x,y;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.size();
        cin>>m;
        cin>>x>>y;
        st=-1;
        f=1;
        int h,mh=0;
        for(i=0;i<m;i++)
        {
            for(char c=x[i];c<=y[i];c++)
            {
                h=-1;
                for(j=st+1;j<n;j++)
                {
                    if(s[j]==c)
                    {
                        h=j;
                        break;
                    }
                }
                if(h==-1)
                {
                    f=0;
                    break;
                }
                mh=max(mh,h);
            }
            if(f==0)
            {
                break;
            }
            st=max(st,mh);
            mh=0;
        }
        if(f==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
