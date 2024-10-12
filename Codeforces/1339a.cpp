#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n==1||n==2){
            printf("%d\n",n);
        }
        else{
            ans=2+(n-2);
        printf("%d\n",ans);
        }
    }
    return 0;
}
