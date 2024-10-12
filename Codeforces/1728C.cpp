#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    int t,i,j,n,c,x,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>a;
        multiset<int>ms;
        for(i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(i=0;i<n;i++)
        {
            cin>>x;
            ms.insert(x);
        }
        sort(a.begin(),a.end());
         for(i=0;i<a.size( );i++)
        {
            x=a[i];
            auto it=ms.lower_bound(x);
            if(it!=ms.end()&&(*it==x))
            {
                a[i]=-1;
                ms.erase(it);
            }
        }
        long long ans=0;
        for(i=0;i<a.size();i++)
        {
            if(a[i]>=10)
            {
                ans++;
                c=log10(a[i]);
                a[i]=c+1;
            }
        }
       for(auto ch=ms.begin();ch!=ms.end();ch++)
        {
            if((*ch)>=10)
            {
                ans++;
                c=log10(*ch);
                ms.erase(ch);
                ms.insert(c+1);
            }
        }
        /// cout<<ans<<endl;
        sort(a.begin(),a.end());
        k=0;
        for(i=0;i<a.size();i++)
        {
            x=a[i];
            auto it=ms.lower_bound(x);
             if(it!=ms.end()&&(*it==x))
            {
                ms.erase(it);
            }
            else
            {
                if(x==1)k++;
            }
        }
        for(auto ch=ms.begin();ch!=ms.end();ch++)
        {
            if((*ch)==1)k++;
        }
        int h=ms.size();
        ans+=2*(max(0,h-k))+min(k,h);
        cout<<ans<<endl;
        /*cout<<endl;
        for(i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;*/
    }
}
