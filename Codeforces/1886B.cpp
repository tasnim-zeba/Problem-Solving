#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    double px,py,ax,ay,bx,by,ox,oy;
    cin>>t;
    while(t--)
    {
        cin>>px>>py;
        cin>>ax>>ay;
        cin>>bx>>by;
        ox=oy=0.0;
        double pa,pb,oa,ob;
        pa=sqrt((px-ax)*(px-ax)+(py-ay)*(py-ay));
        pb=sqrt((px-bx)*(px-bx)+(py-by)*(py-by));
        oa=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        ob=sqrt((ox-bx)*(ox-bx)+(oy-by)*(oy-by));
        if(pa<=pb&&oa<=ob)
        {
            cout<<fixed<<setprecision(10)<<max(pa,oa)<<endl;
        }
        else if(pb<=pa&&ob<=oa)
        {
            cout<<fixed<<setprecision(10)<<max(pb,ob)<<endl;
        }
        else{
            double x,y;
            x=max(min(pa,pb),min(oa,ob));
            y=(sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay)))/2.0;
            cout<<fixed<<setprecision(10)<<max(x,y)<<endl;
        }
    }
}

