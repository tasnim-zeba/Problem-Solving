#include<bits/stdc++.h>
using namespace std;
int const N = 1e7;
int grundy[N+2], notprime[N+2];
void calGrundy()
{
    for(int i=2; i*i<=N; i++)
    {
        if(notprime[i])continue;
        for(int j=i*i; j<=N; j=j+i)
        {
            if(notprime[j])continue;
            notprime[j]=i;
        }
    }
    grundy[0]=0;
    grundy[1]=1;
    int x = 2;
    for(int i=2; i<=N; i++)
    {
        if(i%2==0)continue;
        if(grundy[notprime[i]]==0)
        {
            grundy[i]=x;
            x++;
        }
        else{
            grundy[i]=grundy[notprime[i]];
        }
    }
    /*for(int i=0; i<=100; i++){
        cout<<grundy[i]<<" ";
    }*/
}
int main()
{
    calGrundy();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans = 0;
        for(int i=1, x; i<=n; i++)
        {
            cin>>x;
            ans = ans^grundy[x];
        }
        if(ans==0){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
}
