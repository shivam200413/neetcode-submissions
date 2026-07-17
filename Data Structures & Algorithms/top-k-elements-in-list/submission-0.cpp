class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> sol;

        for(auto it : nums){
            freq[it]++;
        }

        vector<pair<int, int>> v;

        for(auto it : freq){
            v.push_back({it.second, it.first});
        }

        sort(v.begin(), v.end(), greater<pair<int, int>>());
        
        vector<int> ans;

        for(int i=0;i<k;i++) ans.push_back(v[i].second);
        
        return ans;
    }
};
