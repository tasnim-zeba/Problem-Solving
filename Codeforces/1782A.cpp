#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,w,d,h,a,b,f,g,c1;
    cin>>t;
    while(t--)
    {
        cin>>w>>d>>h;
        cin>>a>>b>>f>>g;
        c1=b+h+g+abs(a-f);
        c1=min(c1,d-b+h+d-g+abs(a-f));
        c1=min(c1,a+h+f+abs(b-g));
        c1=min(c1,w-a+h+w-f+abs(b-g));
        cout<<c1<<endl;
    }
}
