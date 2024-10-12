#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,c,f;
    string s1,s2,s;
    cin>>s1>>s2;
    n=s1.size();
    for(i=n-1;s1[i]=='z';i--)
    {
        s1[i]='a';
    }
    s1[i]++;
    if(s1<s2)
    {
        cout<<s1<<endl;
    }
    else
    {
        cout<<"No such string"<<endl;
    }
    return 0;
}
