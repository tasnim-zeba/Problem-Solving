#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    cout<<(n+1)*3+1<<endl;
    cout<<0<<" "<<0<<endl;
    for(i=1;i<=n+1;i++)
    {
        cout<<i<<" "<<i<<endl;
        cout<<i<<" "<<i-1<<endl;
        cout<<i-1<<" "<<i<<endl;
    }
    return 0;
}
