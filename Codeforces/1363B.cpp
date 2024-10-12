#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,c0,c1,a0[1005],a1[1005],n0,n1,mn,x,y,ans;
    string s;
    scanf("%d",&t);
    while(t--){
        cin>>s;
        n=s.size();
        n0=0,n1=0;
        for(i=0;i<n;i++){
            if(s[i]=='0')n0++;
            else if(s[i]=='1')n1++;
        }
        c0=0,c1=0;
        for(i=0;i<n;i++){
            if(s[i]=='0')c0++;
            else if(s[i]=='1')c1++;
            a0[i]=c0;
            a1[i]=c1;
        }
        /* for(i=0;i<n;i++){
            printf("%d ",a0[i]);
        }
        printf("\n");
        for(i=0;i<n;i++){
            printf("%d ",a1[i]);
        }*/
        mn=INT_MAX,ans=INT_MAX;
        for(i=0;i<n;i++){
            x=a0[i]+(n1-a1[i]);
            y=a1[i]+(n0-a0[i]);
            mn=min(x,y);
            ans=min(ans,mn);
        }
        printf("%d\n",ans);
    }
return 0;
}
