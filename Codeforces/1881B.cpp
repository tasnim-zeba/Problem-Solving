#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,m,k;
    cin>>t;
    while(t--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]==a[1]&&a[1]==a[2])
        {
            cout<<"YES"<<endl;
        }
        else if(a[0]==a[1])
        {
            if(a[2]%2==0&&(a[2]/2)==a[0])
            {
                cout<<"YES"<<endl;
            }
            else if(a[2]%3==0&&(a[2]/3)==a[0])
            {
                cout<<"YES"<<endl;
            }
            else if(a[2]%4==0&&(a[2]/4)==a[0])
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(a[1]==a[2])
        {
            if((a[1]%2==0&&(a[1]/2)==a[0])&&(a[2]%2==0&&(a[2]/2)==a[0]))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if((a[1]%2==0&&(a[1]/2)==a[0])&&(a[2]%3==0&&(a[2]/3)==a[0]))
            {
                cout<<"YES"<<endl;
            }
            else if((a[2]%2==0&&(a[2]/2)==a[0])&&(a[1]%3==0&&(a[1]/3)==a[0]))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}

