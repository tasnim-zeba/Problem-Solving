#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sz = s.size();
        int a=0, b=0, c=0, d=0;
        for(int i=0; i<sz; i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            else if(s[i]=='B'){
                b++;
            }
            else if(s[i]=='C'){
                c++;
            }
            else if(s[i]=='D'){
                d++;
            }
        }
        cout<<min(a,n)+min(b,n)+min(c,n)+min(d,n)<<endl;
    }
}
