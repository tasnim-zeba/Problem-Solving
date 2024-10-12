#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100005],i,j,c,mx;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    c=1,mx=INT_MIN;
    for(i=0;i<n-1;i++){
        if(a[i]<=a[i+1])
        {
            c++;
        }else{
            c=1;
        }
        if(c>mx){
            mx=c;
        }
    }
    if(n==1){
        printf("1\n");
    }else{
        printf("%lld\n",mx);
    }
    return 0;
}
