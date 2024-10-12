#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        int f =1;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')break;
            else
            {
                if(t[i]=='1')
                {
                    f=0;
                    break;
                }
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

