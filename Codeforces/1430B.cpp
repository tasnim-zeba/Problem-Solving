#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,a[100005],i,s;
   scanf("%d",&t);
    while(t--){
         scanf("%d %d",&n,&k);
        for(i=0;i<n;i++){
             scanf("%d",&a[i]);
        }
        sort(a,a+n);
        reverse(a,a+n);
        s=0;
        for(i=0;i<=k;i++){
           s=s+a[i];
        }
        printf("%d\n",s);
    }
    return 0;
}
