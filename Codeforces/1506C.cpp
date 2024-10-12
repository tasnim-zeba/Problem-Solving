///Longest common substring
#include<bits/stdc++.h>
using namespace std;
/*int LCS(string x,string y,int m,int n)
{
    int t[m+1][n+1],i,j,res;
    for(i=0;i<m+1;i++){
        for(j=0;j<n+1;j++){
            if(i==0||j==0){
                t[i][j]=0;
            }
        }
    }
    res=0;
    for(i=1;i<m+1;i++){
        for(j=1;j<n+1;j++){
            if(x[i-1]==y[j-1]){
                t[i][j]=1+t[i-1][j-1];
                res=max(res,t[i][j]);
            }else{
                t[i][j]=0;
            }
        }
    }
    return res;
}*/
int LCS(string x,string y,int m,int n)
{
    int t[m+1][n+1],i,j;
    for(i=0;i<m+1;i++)
    {
        for(j=0;j<n+1;j++)
        {
            if(i==0||j==0)
        {
            t[i][j]=0;
        }
        }
    }
    int res=0;
    for(i=1;i<m+1;i++)
    {
        for(j=1;j<n+1;j++)
        {
           if(x[i-1]==y[j-1])
           {
               t[i][j]=1+t[i-1][j-1];
               res=max(res,t[i][j]);
           }
           else
           {
               t[i][j]=0;
           }
        }
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    string x,y;
    while(t--)
    {
        cin>>x>>y;
        int m=x.size();
        int n=y.size();
        int lcs=LCS(x,y,m,n);
        cout<<m-lcs+n-lcs<<endl;
        ///cout<<lcs<<endl;
    }

    /*string x,y;
    int m,n,lcs;
    cin>>x>>y;
    m=x.size();
    n=y.size();
    lcs=LCS(x,y,m,n);
    printf("%d\n",lcs);
    return 0;*/
}
