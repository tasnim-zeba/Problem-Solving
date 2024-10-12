#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2){
            int a[n+1];
            int x = 1;
            for(int i=1; i<=(n/2)+1; i++){
                a[i]=x;
                x=x+2;
            }
            x=2;
            for(int i=n; i>(n/2)+1; i--){
                a[i]=x;
                x=x+2;
            }
            for(int i=1; i<=n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
