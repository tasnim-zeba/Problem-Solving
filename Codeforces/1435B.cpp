#include<bits/stdc++.h>
using namespace std;
int ans[502][502],row[252004],col[252004];
int main()
{
    int t,n,m,i,j,c,x,y;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>x;
                col[x]=j;
            }
        }

        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cin>>y;
                row[y]=j;
            }
        }
        for(i=1;i<=n*m;i++)
        {
            ans[row[i]][col[i]]=i;
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
