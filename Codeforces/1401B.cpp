#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x1,y1,z1,x2,y2,z2,c1,c2,ans;
    cin>>t;
    while(t--){
        cin>>x1>>y1>>z1;
        cin>>x2>>y2>>z2;
        c1=min(z1,y2);
        y2=y2-c1;
        z1=z1-c1;
        y1=y1-y2-x2;
        if(y1>0){
            c2=y1;
        }else{
        c2=0;
        }
        ans=2*c1-2*c2;
        cout<<ans<<endl;
    }
    return 0;
}
