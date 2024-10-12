#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c,pl,ans;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>v;
    c=1;
    ans=INT_MIN;
    for(i=0;i<n-1;)
    {
        while(a[i+1]>a[i])
        {
            i++;
            c++;
            if(i==(n-1))
            {
                break;
            }
        }
        ans=max(ans,c);
        if((i>=1&&(i+1)<n&&a[i-1]<a[i+1])||((i+2)<n&&a[i+2]>a[i]))
        {
             v.push_back(c);
        }
        else if((i+2)>=n)
        {
             v.push_back(c);
        }
        else if(!v.empty())
        {
            v.push_back(c);
            v.push_back(-1);
        }
        i++;
        c=1;
        if(i==(n-1))
        {
            v.push_back(c);
        }
    }
    for(i=0;i<v.size()-1;i++)
    {
        ans=max(ans,v[i]+v[i+1]-1);
    }
    cout<<ans<<endl;
}
