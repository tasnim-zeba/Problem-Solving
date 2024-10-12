#include<bits/stdc++.h>
using namespace std;
#define dtb(n,x) bitset<n>(x).to_string()
int main()
{
    int n,m,i,j,x,k,f;
    cin>>n>>m;
    int a[n+1],b[m+1];
    for(i=1;i<=n;i++)cin>>a[i];
    for(i=1;i<=m;i++)cin>>b[i];
    int q=0;
    for(k=0;k<=512;k++){
        string s=dtb(10,k);
        vector<int>st;
        for(i=0;i<s.size();i++){
            if(s[i]=='0')st.push_back(i);
        }
        q=0;
        for(i=1;i<=n;i++){
            f=0;
            for(j=1;j<=m;j++){
                int p=a[i]&b[j];
                string s1=dtb(10,p);
                int u=0;
                for(auto it:st){
                    if(s1[it]=='1')
                    {
                        u=1;
                        break;
                    }
                }
                if(u==0){
                    f=1;
                    break;
                }
            }
            if(f==1){
                q++;
            }
        }
        if(q==n)
        {
            cout<<k<<endl;
            break;
        }
        ///cout<<q<<endl;
    }
}
