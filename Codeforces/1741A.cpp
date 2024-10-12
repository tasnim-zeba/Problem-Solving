#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
   // fio
    ll t,n,k,i,j,r,m;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        n=s1.size();
        m=s2.size();
        if(s1==s2)
        {
            cout<<"="<<endl;
        }
        else if(s1[n-1]==s2[m-1])
        {
            if(s1[n-1]=='L')
            {
                if(n==m)cout<<"="<<endl;
                else if(n>m)cout<<">"<<endl;
                else  cout<<"<"<<endl;
            }
            else if(s1[n-1]=='S')
            {
                 if(n==m)cout<<"="<<endl;
                else if(n<m)cout<<">"<<endl;
                else  cout<<"<"<<endl;
            }

        }
        else if(s1[n-1]<s2[m-1])
        {
            cout<<">"<<endl;
        }
        else
        {
            cout<<"<"<<endl;
        }
    }
}

