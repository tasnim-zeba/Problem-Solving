#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll e,n,r,b,i,j,x,c,f;
    cin>>e;
    while(e--)
    {
        cin>>n>>r>>b;
        string s="";
        x=ceil((double)r/(b+1));
        while(1)
        {
            if(r==0||b==0)
            {
                break;
            }
            f=x;
            f=min(r,f);
            r=r-f;
                while(f--)
                {
                    s=s+'R';
                }

                if(b>0)
                {
                    s=s+'B';
                    b=b-1;
                }

        }
        if(b)
        {
            for(i=0; i<(n-1)&&b; i++)
            {
                if(s[i]=='B')
                {
                    s.insert(s.begin()+i+1,'B');
                    b--;
                    i++;
                }
            }
        }
        while(r)
        {
            s=s+'R';
            r--;
        }
        cout<<s<<endl;
    }
}
