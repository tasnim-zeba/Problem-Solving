#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,l,r,i;
    cin>>a>>b;
    vector<int>v1,v;
    ///vector<int>::iterator it;
    for(i=1;i*i<=a;i++)
    {
        if(a%i==0)
        {
            v1.push_back(i);
            v1.push_back(a/i);
        }
    }
    for(i=1;i*i<=b;i++)
    {
        if(b%i==0)
        {
            if(find(v1.begin(),v1.end(),i)!=v1.end())
            {
                v.push_back(i);
            }
            if(find(v1.begin(),v1.end(),b/i)!=v1.end())
            {
                v.push_back(b/i);
            }
        }
    }
    sort(v.begin(),v.end());
    /*for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }*/
    cin>>n;
    while(n--)
    {
        cin>>l>>r;
        int x,y;
        auto it=lower_bound(v.begin(),v.end(),l);
        x=it-v.begin();
        it=upper_bound(v.begin(),v.end(),r);
        y=it-v.begin();
        y--;
        if(y>=x)
        {
            cout<<v[y]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        ///cout<<ans<<endl;
    }
}
