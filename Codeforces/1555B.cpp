#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,W,H,x1,y1,x2,y2,w,h,ans,a,b,c,d,x,y;
    cin>>t;
    while(t--)
    {
        cin>>W>>H;
        cin>>x1>>y1>>x2>>y2;
        cin>>w>>h;
        a=H-y2;
        b=y1;
        c=x1;
        d=W-x2;
       /// cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        if((a+b)<h&&(c+d)<w)
        {
            cout<<-1<<endl;
        }
        else{
            if((a+b)>=h)
            {
                y=min(max(h-a,(ll)0),max(h-b,(ll)0));
            }
            else{
                y=INT_MAX;
            }
            if((c+d)>=w)
            {
                x=min(max(w-c,(ll)0),max(w-d,(ll)0));
            }
            else{
                x=INT_MAX;
            }
            /*double d=min(x,y);
            printf("%.9lf\n",d);*/
            cout<<fixed;
            cout<<setprecision(9);
            cout<<double(min(x,y))<<endl;
        }

    }
    return 0;
}
