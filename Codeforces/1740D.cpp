#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,k,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        int a[k+1];
        int p[k+1];
        for(i=0;i<k;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=k;i++)
        {
            p[i]=0;
        }
        int x=n*m-4;
        int f=k;
        c=0;
        int ans=1;
        for(i=0;i<k;i++)
        {
            if(a[i]==f)
            {
                 if(c<=x);
                else
                {
                    ans=0;
                    break;
                }
                c++;
                p[f]=1;
                while(p[f]==1)
                {
                    f--;
                    c--;
                }
            }
            else
            {
                p[a[i]]=1;
                c++;
            }
        }
        if(ans)
        {
            cout<<"YA"<<endl;
        }
        else
        {
             cout<< "TIDAK" <<endl;
        }
    }
}
