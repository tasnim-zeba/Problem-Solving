#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,x,i,n,y,ans,nt;
    scanf("%lld",&t);
    while(t--){
         scanf("%lld",&x);
         if(x==1){
            printf("1\n");
         }
         else{
            ans=1,i=1,n=1;
            x--;
         while(x>0){
                y=i;
                nt=n;
            i=2*i+1;
            n=2*nt+(i-y)*(i-y);
            x=x-n;
            if(x<0){
                break;
            }
            ans++;
         }
         printf("%lld\n",ans);
         }
    }
    return 0;
}
