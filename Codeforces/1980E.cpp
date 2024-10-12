#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int rowFixed[n+1], colFixed[m+1];
        for(int i=1; i<=n; i++)
        {
            rowFixed[i] = 0;
        }
        for(int i=1; i<=m; i++)
        {
            colFixed[i] = 0;
        }
        int x = n*m+2;
        int a[x][2], b[x][2];
        //vector<vector<int>> a(n*m+2, vector<int>(2, 0)),b(n*m+2, vector<int>(2, 0));
        for(int i=1;i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                int x;
                cin>>x;
                a[x][0]=i;
                a[x][1] = j;
            }
        }
        for(int i=1;i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                int x;
                cin>>x;
                b[x][0]=i;
                b[x][1] = j;
            }
        }
        int f=1;
        for(int i=1; i<=n*m; i++)
        {
            //cout<<a[i][0]<<" "<<a[i][1]<<"    "<<b[i][0]<<" "<<b[i][1]<<endl;
            if(rowFixed[a[i][0]]==0){
                rowFixed[a[i][0]] = b[i][0];
            }
            else if(rowFixed[a[i][0]]!=b[i][0])
            {
                f=0;
                break;
            }
            if(colFixed[a[i][1]]==0){
                colFixed[a[i][1]] = b[i][1];
            }
            else if(colFixed[a[i][1]]!=b[i][1])
            {
                f=0;
                break;
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
