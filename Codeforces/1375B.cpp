#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,mx,i,j,a[305][305];
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
            cin>>a[i][j];
            }
        }
        mx=INT_MIN;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
            mx=max(mx,a[i][j]);
            }
        }
        if(mx>4){
            cout<<"NO"<<endl;
           // continue;
        }
        else{
                int c=0;
            for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
           if(i==1||i==n||j==1||j==m){
            if(a[i][j]>=4){
                cout<<"NO"<<endl;
                c=1;
                break;
               // continue;
            }
           }
           if(a[1][1]>=3||a[1][m]>=3||a[n][1]>=3||a[n][m]>=3){
            cout<<"NO"<<endl;
            c=1;
            break;
                //continue;
           }
            }
            if(c==1){
                break;
            }
        }
        if(c==0){
            cout<<"YES"<<endl;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
             if(i==1||i==n||j==1||j==m){
            a[i][j]=3;
           }
           else{
            a[i][j]=4;
           }
            }
        }
        a[1][1]=2;
        a[1][m]=2;
        a[n][1]=2;
        a[n][m]=2;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
            cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        }

        }



    }
    return 0;
}
