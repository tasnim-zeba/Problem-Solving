#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+1][m+1];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        if(n==1&&m==1)
        {
            cout<<-1<<endl;
            continue;
        }
        else if(m!=1)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m-1; j++)
                {
                    swap(a[i][j], a[i][j+1]);
                }
            }
        }
        else{
            for(int j=0; j<m; j++)
            {
                for(int i=0; i<n-1; i++)
                {
                    swap(a[i][j], a[i+1][j]);
                }
            }
        }
        for(int i=0; i<n; i++)
        {
                for(int j=0; j<m; j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
        }

    }
}

