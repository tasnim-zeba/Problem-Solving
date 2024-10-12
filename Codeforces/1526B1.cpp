///coin change(I)-maximum number of ways
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
using namespace std;
int main()
{
    int n,sum,i,j,a[1000];
    scanf("%d %d",&n,&sum);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    bool t[n+1][sum+1];
    for(i=0;i<n+1;i++){
        for(j=0;j<sum+1;j++){
        if(i==0)t[i][j]=false;
        if(j==0)t[i][j]=true;
        }
    }
    for(i=1;i<n+1;i++){
        for(j=1;j<sum+1;j++){
        if(a[i-1]<=j){
        t[i][j]=t[i][j-a[i-1]]+t[i-1][j];
        /*if((t[i-1][j-a[i-1]]))//||(t[i][j]=[i-1][j]))
        {
            t[i][j]=true;
        }
        else if((t[i-1][j])){
            t[i][j]=true;
        }
        else{
        t[i][j]=false;
        }*/
        }
        else{
        t[i][j]=t[i-1][j];
        }
        }
    }
    if(t[n][sum]){
    printf("YES\n");
    }
    else{
    printf("NO\n");
    }
    return 0;
}
