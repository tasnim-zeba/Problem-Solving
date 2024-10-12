#include<bits/stdc++.h>
using namespace std;
int main()
{
int e,n,k1,k2,w,b,m1,m2,m;
    scanf("%d",&e);
    while(e--){
       scanf("%d %d %d",&n,&k1,&k2);
        scanf("%d %d",&w,&b);
        m1=min(k1,k2);
        m2=max(k1,k2);
        if(w<=(m1+abs(k1-k2)/2)){
            m=n-m2;
            if(b<=(m+abs(n-m1-m)/2)){printf("YES\n");
            }else{printf("NO\n");
        }
        }else{printf("NO\n");
        }
    }
    return 0;
}
