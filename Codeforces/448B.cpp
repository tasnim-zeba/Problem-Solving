#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    string s,t;
    cin>>s>>t;
    int n,m,i,j,idx;
    n=s.size();
    m=t.size();
    map<char,int>mps;
    map<char,int>mpt;
    for(i=0;i<n;i++)
    {
        mps[s[i]]++;
    }
    for(i=0;i<m;i++)
    {
        mpt[t[i]]++;
    }
    if(n==m)
    {
        int f=1;
         for(char ch='a';ch<='z';ch++)
         {
             if(mps[ch]!=mpt[ch])
             {
                 f=0;
                 break;
             }
         }
         if(f)
         {
             cout<< "array" <<endl;
         }
         else
         {
               cout<< "need tree"<<endl;
         }
    }
    else if(n<m)
    {
        cout<< "need tree"<<endl;
    }
    else
    {
        int f=1;
         for(char ch='a';ch<='z';ch++)
         {
             if(mps[ch]<mpt[ch])
             {
                 f=0;
                 break;
             }
         }
         if(f)
         {
              string s1="";
              int c=1;
              idx=0;
              for(i=0;i<m;i++)
              {
                  int g=0;
                  for(j=idx;j<n;j++)
                  {
                      if(t[i]==s[j])
                      {
                          g=1;
                          idx=j+1;
                          break;
                      }
                  }
                  if(g==0)
                  {
                      c=0;
                      break;
                  }
              }
              if(c)
              {
                  cout<<"automaton"<<endl;
              }
              else
              {
                  cout<<"both"<<endl;
              }
         }
         else
         {
               cout<< "need tree"<<endl;
         }
    }
}

