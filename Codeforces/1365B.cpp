// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;
int b[505];
int issorted(int a[], int n)
{
    int i,c=1;
    for(i=1;i<n;i++){
        if(a[i]<a[i-1]){
            c=0;
            break;
        }
    }
   return c;
}
int main()
{
    int arr[505],t,n,i,ans,c1,c0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        c1=0,c0=0;
         for(i=0;i<n;i++){
            scanf("%d",&b[i]);
            if(b[i]==0){
                c0=1;
            }
            if(b[i]==1){
                c1=1;
            }
        }
        ans=issorted(arr, n);
    if(ans==1){
        printf("Yes\n");
    }else{
        if(c0==1&&c1==1){
            printf("Yes\n");
        }else{
        printf("No\n");
        }
    }
    }
    return 0;
}

// This code is contributed by rathbhupendra
