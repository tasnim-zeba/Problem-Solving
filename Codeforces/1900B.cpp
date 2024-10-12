#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int ar[4];
        ar[1]=ar[2]=ar[3]=0;
        int x,y,z;
        x=abs(a-b),y=abs(a-c),z=abs(b-c);
        if(z%2==0)ar[1]=1;
        if(y%2==0)ar[2]=1;
        if(x%2==0)ar[3]=1;
        cout<<ar[1]<<" "<<ar[2]<<" "<<ar[3]<<endl;
    }
}
