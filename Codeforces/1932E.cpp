#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    /*char ch = '0'+7;
    cout<<ch<<endl;*/
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        ans = ans + s;
        int pre[n+1];
        pre[0]=s[0]-'0';
        //cout<<pre[0]<<endl;
        for(int i=1; i<n; i++)
        {
            int x = s[i]-'0';
            pre[i]=pre[i-1]+x;
            //cout<<pre[i]<<endl;
        }
        int rem=0;
        for(int i=n-1; i>=0; i--)
        {
            int x = pre[i]+rem;
            int r = x%10;
            ans[i] = '0'+r;
            rem=x/10;
        }
        char ch = '0'+rem;
        if(rem!=0)
        {
            cout<<ch;
        }
        int k=0;
        while(k<n && ans[k]=='0' && rem==0)
        {
            k++;
        }
        for(int i=k; i<n; i++)
        {
            cout<<ans[i];
        }
        cout<<endl;
    }
}

