#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c1,c2;
    cin>>n;
    string s,s1;
    cin>>s;
    s1=s;
    vector<int>v1,v2;
    ///making black
    c1=0;
    for(i=0;i<n-1;i++)
    {
        if(s[i]=='W'&&s[i+1]=='W')
        {
            s[i]='B';
            s[i+1]='B';
            v1.push_back(i);
        }
        else if(s[i]=='W'&&s[i+1]=='B')
        {
            s[i]='B';
            s[i+1]='W';
            v1.push_back(i);
        }
    }
    if(s[i]=='B')
    {
        c1=1;
    }
    ///making white
    c2=0;
    for(i=0;i<n-1;i++)
    {
        if(s1[i]=='B'&&s1[i+1]=='B')
        {
            s1[i]='W';
            s1[i+1]='W';
            v2.push_back(i);
        }
        else if(s1[i]=='B'&&s1[i+1]=='W')
        {
            s1[i]='W';
            s1[i+1]='B';
            v2.push_back(i);
        }
    }
    if(s1[i]=='W')
    {
        c2=1;
    }
    if(c1)
    {
        cout<<v1.size()<<endl;
        for(i=0;i<v1.size();i++)
        {
            cout<<v1[i]+1<<" ";
        }
        cout<<endl;
    }
    else if(c2)
    {
        cout<<v2.size()<<endl;
        for(i=0;i<v2.size();i++)
        {
            cout<<v2[i]+1<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}
