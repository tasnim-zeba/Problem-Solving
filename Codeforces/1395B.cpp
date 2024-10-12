#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y,i,j,c;
    cin>>n>>m>>x>>y;
    cout<<x<<" "<<y<<endl;
    for(i=x+1;i<=n;i++){
        cout<<i<<" "<<y<<endl;
    }
    for(i=x-1;i>=1;i--){
        cout<<i<<" "<<y<<endl;
    }
    for(i=y+1;i<=m;i++){
       for(j=1;j<=n;j++){
        cout<<j<<" "<<i<<endl;
        }
        i++;
        if(i>m){
            break;
        }
        for(j=n;j>=1;j--){
        cout<<j<<" "<<i<<endl;
        }
    }
    if(j==n){
        for(i=y-1;i>=1;i--){
        for(j=n;j>=1;j--){
        cout<<j<<" "<<i<<endl;
        }
        i--;
        if(i<1){
            break;
        }
        for(j=1;j<=n;j++){
        cout<<j<<" "<<i<<endl;
        }
    }
    }else{
    for(i=y-1;i>=1;i--){
            for(j=1;j<=n;j++){
        cout<<j<<" "<<i<<endl;
        }
        i--;
        if(i<1){
            break;
        }
        for(j=n;j>=1;j--){
        cout<<j<<" "<<i<<endl;
        }
    }
    }
   return 0;
}
