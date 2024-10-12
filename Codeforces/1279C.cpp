 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n,m,i,j,t,c;
     long long ans;
     cin>>t;
     while(t--)
     {
         cin>>n>>m;
         int a[n+1];
         int b[m+1];
         for(i=0;i<n;i++)
         {
             cin>>a[i];
         }
         for(i=0;i<m;i++)
         {
             cin>>b[i];
         }
         int vis[n+1];
         c=0;
         for(i=1;i<=n;i++)
         {
             vis[i]=0;
         }
         ans=0LL;
         for(i=0,j=0;j<m&&i<n;)
         {
             vis[a[i]]=1;
             if(a[i]==b[j])
             {
                 ans=ans+(2*c)+1;
                 j++;
                 i++;
             }
             else  if(vis[b[j]])
             {
                 ans++;
                 j++;
                 c--;
             }
             else
             {
                 c++;
                 i++;
             }
             ///cout<<ans<<endl;
         }
         for(i=j;i<m;i++)
         {
             ans++;
         }
         cout<<ans<<endl;
     }
 }
