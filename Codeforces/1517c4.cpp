#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ans[502][502];
int c=0;
int n,i,j,z;
void ruc(int x,int y,int z)
{
    if(x<0||y<0||x>=n||y>=n||ans[x][y]!=-1||c==0)
    {
        return;
    }
    c--;
    ans[x][y]=z;
    ruc(x+1,y,z);
    ruc(x,y-1,z);
}
int main()
{
    cin>>n;
    memset(ans,-1,sizeof(ans));
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=n-1;i>=0;i--)
    {
        c=a[i];
        ruc(i,i,a[i]);
    }
    for(i=0;i<n;i++){
         for(j=0;j<=i;j++){
            cout<<ans[i][j]<<" ";
         }
         cout<<endl;
    }
    cout<<endl;
    return 0;
}
