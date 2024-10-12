#include<bits/stdc++.h>
#include<stdio.h>
int main()
{
    long long t,n,a[100005],i,c;
    scanf("%lld",&t);
    while(t--){
    scanf("%lld",&n);
    c=0;
    for(i=0;i<n;i++){
    scanf("%lld",&a[i]);
    if(a[i]!=1){
        c=1;
    }
    }
    if(c==0){
        if(n%2==0){
            printf("Second\n");
        }else{
        printf("First\n");
        }
    }
    else{
        for(i=0;i<n;i++){
            if(a[i]!=1){
                if(i%2!=0){
            printf("Second\n");
        }else{
        printf("First\n");
        }
        break;
            }
        }
    }
    }
    return 0;
}
