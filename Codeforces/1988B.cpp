#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='1'&&s[n-1]=='1')
        {
            cout<<"YES"<<endl;
        }
        else if(s[0]=='1'||s[n-1]=='1')
        {
            if(n==3){
                if(s[1]=='1')cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                continue;
            }

            int f=0;
            for(int i=0; i<n-1; i++)
            {
                if(s[i]=='1'&&s[i+1]=='1')
                {
                    f=1;
                    break;
                }
            }
            if(f==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(n<=4){
                cout<<"NO"<<endl;
                continue;
            }
            int f=0;
            for(int i=0; i<n-2; i++)
            {
                if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='1')
                {
                    f=1;
                    break;
                }
            }
            int f1 =0;
            for(int i=0; i<n-1; i++)
            {
                if(s[i]=='1'&&s[i+1]=='1')
                {
                    f1++;
                }
            }
            if(f==1||f1>=2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
}

