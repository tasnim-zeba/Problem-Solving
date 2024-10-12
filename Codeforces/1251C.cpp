#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=s.size();
        vector<char>odd,even;
        for(i=0;i<n;i++)
        {
            int y=s[i]-'0';
            //cout<<y<<endl;
            if(y%2==0)even.push_back(s[i]);
            else odd.push_back(s[i]);
        }
        for(i=0,j=0; i<even.size()||j<odd.size(); )
        {
            if(i==even.size())
            {
                cout<<odd[j];
                j++;
            }
            else if(j==odd.size())
            {
                cout<<even[i];
                i++;
            }
            else if(even[i]<odd[j])
            {
                cout<<even[i];
                i++;
            }
            else
            {
                cout<<odd[j];
                j++;
            }
        }
        cout<<endl;
    }
}
