// https://www.geeksforgeeks.org/problems/sequence-of-sequence1155/1

class Solution{
private:
    int solve(int ind,int m,int n,vector<vector<int>>& dp){
        if(n==0)return 1;
        if(ind>m)return 0;
        if(dp[ind][n]!=-1)return dp[ind][n];
        int pick=solve(ind*2,m,n-1,dp);
        int notPick=solve(ind+1,m,n,dp);
        return dp[ind][n] = pick+notPick;
    }
public:
    int numberSequence(int m, int n){
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(1,m,n,dp);
    }
};
