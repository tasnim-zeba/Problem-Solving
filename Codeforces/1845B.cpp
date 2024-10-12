#include<bits/stdc++.h>
using namespace std;
int func(int a,int b,int c)
{
    if(b>=a&&c>=a)
    {
        return min((b-a),(c-a));
    }
    else if(b<=a&&c<=a)
    {
        return min(a-b,a-c);
    }
    else return 0;
}
int main()
{
    int t,x1,x2,x3,y1,y2,y3;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        int ans=func(x1,x2,x3)+func(y1,y2,y3)+1;
        cout<<ans<<endl;
    }
}
