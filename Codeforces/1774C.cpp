#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,kh,z,o;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        kh=z=o=0;
        for(i=0;i<n-1;i++)
        {
            if(s[i]=='0')
            {
                z++;
                o=0;
            }
            else
            {
                o++;
                z=0;
            }
            kh=i+2;
            cout<<kh-z-o<<" ";
        }
        cout<<endl;
    }
}
