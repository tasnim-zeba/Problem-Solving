#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()==1)
        {
            cout<<stoi(s)-1<<endl;
            continue;
        }
        string x,y;
        x=y="";
        for(i=0;i<s.size();i+=2)
        {
            x=x+s[i];
        }
        for(i=1;i<s.size();i+=2)
        {
            y+=s[i];
        }
        int a,b;
        a=stoi(x);
        b=stoi(y);
        cout<<(a+1)*(b+1)-2<<endl;
    }
}
