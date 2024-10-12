#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,x,y,i,j,nx,ny,ans,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&n,&m,&x,&y);
        char s[n+1][m+1];
        c=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                ///scanf("%c",&s[i][j]);
                cin>>s[i][j];
                if(s[i][j]=='.'){
                    c++;
                }
            }
        }
      ny=0;
      for(i=0;i<n;i++){
            for(j=0;j<m-1;j++){
                if(s[i][j]=='.'&&s[i][j+1]=='.'){
                    ny++;
                    j++;
                }
            }
        }
        nx=c-2*ny;
        if(y<2*x){
            ans=nx*x+ny*y;
        }
        else{
            ans=c*x;
        }
        printf("%d\n",ans);
    }
    return 0;
}
