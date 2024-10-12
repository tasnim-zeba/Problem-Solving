#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long r,x,y,x1,y1,p;
    cin>>r>>x>>y>>x1>>y1;
    ///p=sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1)));
    cout<<ceil(sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1)))/(2.0*r))<<endl;
}
