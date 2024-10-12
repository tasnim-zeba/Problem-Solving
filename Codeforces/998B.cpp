#include<bits/stdc++.h>
using namespace std;
int b;
bool eo(int a[102],int i,int j)
{
    int co=0,ce=0;
    for(int k=i;k<=j;k++){
        if(a[k]%2==0){
            ce++;
        }else{
            co++;
        }
    }
    if(ce==co){
        return true;
    }
    else{
        return false;
    }
}
int static t[102][102];
int solve(int a[102],int i,int j)
{
    int temp;
    if(i>=j)return 0;
    if(eo(a,i,j)==true)return 0;
    if(t[i][j]!=-1)return t[i][j];
    int mx=INT_MIN;
    for(int k=i;k<j;k++){
    if((b-abs(a[k]-a[k+1]))>=0){
         temp=1+solve(a,i,k)+solve(a,k+1,j);
          b=b-abs(a[k]-a[k+1]);
    }
    if(temp<mx){
            mx=temp;
        }
    }
    return t[i][j]=mx;
}
int main()
{
    int n,a[102],ans,i;
    scanf("%d %d",&n,&b);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    memset(t,-1,sizeof(t));
    ans=solve(a,0,n-1);
    printf("%d\n",ans);
}
