class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> sol(nums.begin(), nums.end());
        if(sol.size() != nums.size()){
            return true;
        }
        return false;
    }
};