class Solution {
public:
    int dfs(int indx, int n, string s, set<string>& st, vector<int> &dp)
    {
        if(indx==n)return dp[indx]=1;
        if(dp[indx]!=-1)return dp[indx];
        string s1="";
        for(int i=indx; i<n; i++)
        {
            s1.push_back(s[i]);
            if(st.find(s1)!=st.end())
            {
                if(dfs(i+1, n, s, st, dp)==1)
                {
                    return dp[indx]=1;
                }
            }
        }
        return dp[indx]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string>st;
        for(auto ch: wordDict)
        {
            st.insert(ch);
        }
        int n = s.size();
        vector<int>dp(n+2, -1);
        int b = dfs(0, n, s, st, dp);
        if(b)return true;
        else return false;
    }
};