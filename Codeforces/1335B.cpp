#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,i,j,x,c;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
         char ch;
                x=97,c=0;
            for(i=1;i<=n;i++){
                ch=x;
                cout<<ch;
                if(c==b-1){
                    x=97;
                    c=0;
                }
                else{
                     x++;
                     c++;
                }
            }
            cout<<endl;
    }
}
