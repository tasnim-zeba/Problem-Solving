#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,c;
    cin>>n>>k;
    string s;
    cin>>s;
    c=1;
    for(i=0;i<n;i++)
    {
        if(s[i]>s[i%c])break;
        else if(s[i]<s[i%c])
        {
            c=i+1;
        }
    }
    for(i=0;i<k;i++)
    {
        cout<<s[i%c];
    }
    cout<<endl;
}
