#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n+1],b[n+1];
    int c=0;
    set<int>st;
    for(i=0;i<=n+1;i++)
    {
        st.insert(i);
    }
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        st.erase(a[i]);
        b[i]=-1;
        if(a[i]>i)
        {
            c=1;
        }
    }
    if(c==1)
    {
         cout<<-1<<endl;
         return 0;
    }
    for(i=n;i>1;i--)
    {
        if(a[i]!=a[i-1])
        {
            b[i]=a[i-1];
        }
    }
    auto it=st.begin();
    for(i=1;i<=n;i++)
    {
        if(b[i]==-1)
        {
            b[i]=*it;
            it++;
        }
    }
    for(i=1;i<=n;i++)
    {
       cout<<b[i]<<" ";
    }
    cout<<endl;
}
