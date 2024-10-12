#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,c,mn,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1],b[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        mn=*min_element(a,a+n);
        vector<int>v;
        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                v.push_back(a[i]);
            }
        }
        c=1;
        for(i=0;i<v.size();i++)
        {
            if(v[i]%mn!=0)
            {
                c=0;
                break;
            }
            ///cout<<v[i]<<" ";
        }
        if(c)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
