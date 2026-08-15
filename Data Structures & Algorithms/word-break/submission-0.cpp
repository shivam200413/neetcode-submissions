class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();

        unordered_set<string> set(wordDict.begin(), wordDict.end());
        int maxl = 0;

        for(string word : wordDict){
            maxl = max(maxl, (int)word.size());
        }

        vector<bool> dp(n+1, false);
        dp[0] = true;

        for(int i=1;i<=n;i++){
            for(int j=i-1;j>=max(0, i-maxl); j--){
                if(dp[j] && set.count(s.substr(j, i-j))){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[n];
    }
};
