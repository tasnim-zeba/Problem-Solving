#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,k,n,m,i,j,c;
    cin>>t;
    while(t--)
    {
        string s;
        getline(cin,s);
        cin>>k>>n>>m;
        ll a[n+1];
        ll b[m+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>b[i];
        }
        c=k;
        vector<ll>v;
        int f=1;
        for(i=0,j=0;i<n&&j<m;)
        {

            if(a[i]==0)
            {
                v.push_back(0);
                c++;
                i++;
            }
            else if(b[j]==0)
            {
                v.push_back(0);
                c++;
                j++;
            }
            else{
                if(a[i]<=b[j])
                {
                if(a[i]<=c)
                {
                    v.push_back(a[i]);
                    i++;
                }
                else{
                    f=-1;
                    break;
                }
                }
                else{
                if(b[j]<=c)
                {
                    v.push_back(b[j]);
                   j++;
                }
                else{
                    f=-1;
                    break;
                }
                }
            }
        }
        while(i<n)
        {
            if(a[i]==0)
            {
                v.push_back(0);
                c++;
                i++;
            }
            else{
                if(a[i]<=c)
                {
                    v.push_back(a[i]);
                    i++;
                }
                else{
                    f=-1;
                    break;
                }
            }
        }
        while(j<m)
        {
            if(b[j]==0)
            {
                v.push_back(0);
                c++;
                j++;
            }
            else{
                if(b[j]<=c)
                {
                    v.push_back(b[j]);
                    j++;
                }
                else{
                    f=-1;
                    break;
                }
            }
        }
        if(f==-1)
        {
            cout<<-1<<endl;
        }
        else
        {
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        }
    }
    return 0;
}
