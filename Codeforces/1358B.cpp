#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a[100005],c,ans;
    scanf("%d",&t);
    while(t--){
         scanf("%d",&n);
         for(i=1;i<=n;i++){
             scanf("%d",&a[i]);
         }
         sort(a+1,a+n+1);
         c=0;
         for(i=n;i>=1;i--){
             if(i>=a[i]){
                    ans=i;
                c=1;
                break;
             }
         }
         if(c==1){
            printf("%d\n",ans+1);
         }else{
            printf("1\n");
         }
    }
    return 0;
}
