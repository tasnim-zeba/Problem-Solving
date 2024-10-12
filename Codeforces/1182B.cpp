#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int h,w,i,j,x,y,n,m;
    cin>>h>>w;
    char s[h+1][w+1];
    x=-1,y=-1;
    n=0;
    for(i=0; i<h; i++)
    {
        for(j=0; j<w; j++)
        {
            cin>>s[i][j];
            if(s[i][j]=='*')
            {
                n++;
            }
        }
    }
    m=0;
    for(i=1; i<h-1; i++)
    {
        for(j=1; j<w-1; j++)
        {
            if(s[i][j]=='*'&&s[i-1][j]=='*'&&s[i+1][j]=='*'&&s[i][j-1]=='*'&&s[i][j+1]=='*')
            {
                x=i;
                y=j;
                break;
            }
        }
    }
    for(int k=x;k<h&&s[k][y]=='*';k++)m++;
    for(int k=x-1;k>=0&&s[k][y]=='*';k--)m++;
    for(int k=y;k<w&&s[x][k]=='*';k++)m++;
    for(int k=y-1;k>=0&&s[x][k]=='*';k--)m++;
    if(m==n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
