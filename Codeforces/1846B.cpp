#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3;
        cin>>s1;
        cin>>s2;
        cin>>s3;
        if(s1[0]==s2[0]&&s2[0]==s3[0]&&s2[0]!='.')
        {
            cout<<s2[0]<<endl;
        }
        else if(s1[1]==s2[1]&&s2[1]==s3[1]&&s2[1]!='.')
        {
            cout<<s2[1]<<endl;
        }
        else if(s1[2]==s2[2]&&s2[2]==s3[2]&&s2[2]!='.')
        {
            cout<<s2[2]<<endl;
        }
        else if(s1[0]==s1[1]&&s1[1]==s1[2]&&s1[2]!='.')
        {
            cout<<s1[0]<<endl;
        }
        else if(s2[0]==s2[1]&&s2[1]==s2[2]&&s2[2]!='.')
        {
            cout<<s2[0]<<endl;
        }
        else if(s3[0]==s3[1]&&s3[1]==s3[2]&&s3[2]!='.')
        {
            cout<<s3[0]<<endl;
        }
         else if(s1[0]==s2[1]&&s2[1]==s3[2]&&s3[2]!='.')
        {
            cout<<s1[0]<<endl;
        }
         else if(s1[2]==s2[1]&&s2[1]==s3[0]&&s3[0]!='.')
        {
            cout<<s3[0]<<endl;
        }
        else
        {
            cout<<"DRAW"<<endl;
        }
    }
}
