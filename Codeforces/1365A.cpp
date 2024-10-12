#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,m,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n+1][m+1];
        vector<int>v1;
        vector<int>v2;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    v1.push_back(i);
                    v2.push_back(j);
                }
            }
        }
        c=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(find(v1.begin(),v1.end(),i)==v1.end()&&find(v2.begin(),v2.end(),j)==v2.end())
                {
                    c++;
                    a[i][j]=1;
                    v1.push_back(i);
                    v2.push_back(j);
                }
            }
        }
        if(c%2==0)
        {
            cout<<"Vivek"<<endl;
        }
        else
        {
            cout<< "Ashish"<<endl;
        }
    }
    return 0;
}
