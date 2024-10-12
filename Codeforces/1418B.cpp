#include<bits/stdc++.h>
using namespace std;
int a[102];
int main()
{
    int t,n,i,x,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>v;
        for(i=0;i<n;i++){
            cin>>x;
            if(x==0)
            {
                v.push_back(a[i]);
                a[i]=1e6;
            }
        }
        sort(v.begin(),v.end(),greater<>());
        j=0;
        for(i=0;i<n;i++){
            if(a[i]==1e6)
            {
                cout<<v[j]<<" ";
                j++;
            }else
            {
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
