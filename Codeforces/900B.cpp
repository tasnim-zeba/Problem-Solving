#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,m,d,x,k,f;
    cin>>a>>b>>c;
    m=a%b;
    if(m==0&&c==0)cout<<1<<endl;
    else
    {
        x=1;
        f=0;
        while(m)
        {
            k=(10*m)/b;
                if(k==c){f=1;break;}
                m=(10*m)%b;
                x++;
                if(x>1e5)break;
        }
        if(c==0&&m==0)
        {
            f=1;
        }
        if(f)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
