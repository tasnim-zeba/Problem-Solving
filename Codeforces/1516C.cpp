///Dp-Equal sum partition problem
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int a[102];
int main()
{
   long long i,j,sum,s,n,x;
    cin>>n;
    sum=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    if(sum%2!=0)
    {
       cout<<0<<endl;
    }
    else{
        s=sum/2;
        bool t[n+1][s+1];
        for(i=0;i<(n+1);i++){
            for(j=0;j<(s+1);j++){
                if(i==0)t[i][j]=false;
                if(j==0)t[i][j]=true;
            }
        }
        for(i=1;i<(n+1);i++){
            for(j=1;j<(s+1);j++){
                if(a[i-1]<=j){
                t[i][j]=t[i-1][j-a[i-1]]||t[i-1][j];
               }
               else{
                t[i][j]=t[i-1][j];
            }
            }
        }
        if(t[n][s]){
            while(1)
            {
                int f=0;
                for(i=0;i<n;i++)
                {
                    if(a[i]%2!=0)
                    {
                        cout<<1<<endl;
                        cout<<i+1<<endl;
                        f=1;
                        break;
                    }
                    else{
                        a[i]=a[i]/2;
                    }
                }
                if(f){
                    break;
                }
            }
        }
        else {
        cout<<0<<endl;
        }
    }
    return 0;
}
