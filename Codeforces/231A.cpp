#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q,x,y,z,i,c=0,s;
    cin>>q;
    for(i=1;i<=q;i++){
        cin>>x>>y>>z;
        s=x+y+z;
        if(s==3||s==2)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
