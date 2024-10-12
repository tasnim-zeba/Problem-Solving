#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,i,j,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n= s.size();
        if(s[0]!='1'||s[n-1]=='9')
        {
            cout<<"NO"<<endl;
        }
        else{
                int f=0;
                for(i=1;i<n-1;i++)
                {
                    if(s[i]=='0')
                    {
                        f=1;
                        break;
                    }
                }
                if(f)
                {
                    cout<<"NO"<<endl;
                }
                else
                cout<<"YES"<<endl;
        }
    }
}

