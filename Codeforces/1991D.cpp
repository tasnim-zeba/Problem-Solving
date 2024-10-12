#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n<6)
        {
            cout<<(n/2)+1<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<(i+3)/2<<" ";
            }
            cout<<endl;
            continue;
        }
        cout<<4<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<(i%4)+1<<" ";
        }
        cout<<endl;
    }
}

