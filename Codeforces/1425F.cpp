#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,l,r,a,b,c;
    cin>>n;
    int arr[n+1];
    cout<<"? "<<1<<" "<<3<<endl;
    cin>>a;
    cout<<"? "<<1<<" "<<2<<endl;
    cin>>b;
    cout<<"? "<<2<<" "<<3<<endl;
    cin>>c;
    arr[1]=a-c;
    arr[3]=a-b;
    arr[2]=a-(arr[1]+arr[3]);
    for(i=4;i<=n;i++)
    {
        cout<<"? "<<i-1<<" "<<i<<endl;
        cin>>a;
        arr[i]=a-arr[i-1];
    }
    cout<<"! ";
    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
