#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,m,k,i,j,x,l,c;
    cin>>n>>m>>k;
    m++;
    vector<string>v;
    while(m--)
    {
        cin>>x;
        string s="";
        while(x)
        {
            s=s+(char)((x%2)+48);
            x=x/2;
        }
        ///reverse(s.begin(),s.end());
        v.push_back(s);
        ///cout<<s<<endl;
    }
    c=0;
    /*for(i=0;i<v.size()-1;i++)
    {
        for(j=i+1;j<v.size();j++)
        {
            int n1,n2;
            n1=v[i].size();
            n2=v[j].size();
            int c1=0;
            for(l=0;l<n1&&l<n2;l++)
            {
                if(v[i][l]!=v[j][l])
                {
                    c1++;
                }
            }
            if(n1>n2)
            {
                for(l=l;l<n1;l++)
                {
                    if(v[i][l]=='1')
                    {
                        //c1++;
                    }
                }
            }
            else if(n1<n2)
            {
                for(l=l;l<n2;l++)
                {
                    if(v[j][l]=='1')
                    {
                        //c1++;
                    }
                }
            }
            if(c1<=k)
            {
                c++;
            }
        }
    }*/
    c=0;
    int c1=0;
    int p=v.size();
    int n1=v[p-1].size();
    for(i=0;i<p-1;i++)
    {
        c1=0;
        int n2=v[i].size();
        for(j=0;j<n1&&j<n2;j++)
        {
            if(v[i][j]!=v[p-1][j])
            {
                c1++;
            }
        }
        if(n1>n2)
            {
                for(j=j;j<n1;j++)
                {
                    if(v[p-1][j]=='1')
                    {
                        c1++;
                    }
                }
            }
            else if(n1<n2)
            {
                for(j=j;j<n2;j++)
                {
                    if(v[i][j]=='1')
                    {
                        c1++;
                    }
                }
            }
        if(c1<=k)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;

}
