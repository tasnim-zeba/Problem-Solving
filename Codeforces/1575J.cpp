#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,j,x,r,c,p;
    cin>>n>>m>>k;
    vector<int>one[m+1];
    vector<int>three[m+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>x;
            if(x==1)
            {
                one[j].push_back(i);
            }
            else if(x==3)
            {
                three[j].push_back(i);
            }
        }
    }
    for(j=1;j<=m;j++)
    {
        if(one[j].size())
        sort(one[j].begin(),one[j].end());
        if(three[j].size())
        sort(three[j].begin(),three[j].end());
    }
    ///int c[k+1];
    for(j=1;j<=k;j++)
    {
        cin>>x;
        r=1,c=x;
        while(r<=n)
        {
            auto it1=one[c].end();
            auto it2=three[c].end();
            if(one[c].size())
            it1=lower_bound(one[c].begin(),one[c].end(),r);
            if(three[c].size())
            it2=lower_bound(three[c].begin(),three[c].end(),r);
            if(it1==one[c].end()&&it2==three[c].end())
            {
                break;
            }
            else  if(it1==one[c].end())
            {
                r=(*it2);
                three[c].erase(it2);
                c--;
            }
             else  if(it2==three[c].end())
            {
               r=(*it1);
                one[c].erase(it1);
                c++;
            }
            else if((*it1)<(*it2))
            {
                r=(*it1);
                one[c].erase(it1);
                c++;
            }
            else
            {
                r=(*it2);
                three[c].erase(it2);
                c--;
            }
        }
        cout<<c<<" ";
    }
    cout<<endl;
}
