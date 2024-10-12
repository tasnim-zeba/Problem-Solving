#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c1,c2,mn,i,x,y;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a<b)cout<<1<<endl;
        else if(a==b)cout<<2<<endl;
        else{
            c1=0;
            if(b==1){
                c1++;
                b=2;
            }
            mn=INT_MAX;
           for(i=0;i<=31;i++){
            c2=i;
            y=b+i;
            x=a;
            while(x!=0){
                x=x/y;
                c2++;
            }
            mn=min(mn,(c1+c2));
           }
            cout<<mn<<endl;
        }
    }
    return 0;
}
