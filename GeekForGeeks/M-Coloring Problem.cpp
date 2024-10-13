//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   bool isPossible(int u, int c, vector<int> &col, vector<vector<int>> &g )
   {
       for(auto v: g[u])
       {
           if(col[v]==c)return false;
       }
       return true;
   }
    bool color(int u, int v, int m, vector<int> &col, vector<vector<int>> &g)
    {
        if(u==v)return true;
        for(int i=1; i<=m; i++)
        {
            if(isPossible(u, i, col, g))
            {
                col[u]=i;
                if(color(u+1, v,  m, col, g))
                {
                    return true;
                    break;
                }
                col[u]=0;
            }
        }
        return false;
    }
    bool graphColoring(int v, vector<pair<int, int>>& edges, int m) {
        // code here
        vector<vector<int>>g(v);
        for(int i=0; i<edges.size(); i++)
        {
            g[edges[i].first].push_back(edges[i].second);
            g[edges[i].second].push_back(edges[i].first);
        }
        vector<int>col(v, 0);
        bool b = color(0, v, m, col, g);
        return b;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m;
        cin >> n;
        cin.ignore(); // Ignore newline after reading n
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number); // Populate the array with edge values
        }
        cin >> m;
        cin.ignore(); // Ignore newline after reading m

        int edges_count = arr.size();
        vector<pair<int, int>> edges(edges_count /
                                     2); // Correct size of the edges vector

        for (int i = 0; i < edges_count; i += 2) {
            int l1 = arr[i];
            int l2 = arr[i + 1];
            edges[i / 2] = {l1, l2}; // Properly assign the pair
        }

        Solution ob;
        cout << (ob.graphColoring(n, edges, m) ? "true" : "false")
             << endl; // Call the graph coloring function
    }
    return 0;
}

// } Driver Code Ends