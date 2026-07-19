class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sol;
        int n = numbers.size();
        int l = 0, r = n-1;
        while(l<r){
            if(numbers[l] + numbers[r] == target){
                sol.push_back(l+1);
                sol.push_back(r+1);
                return sol;
            }
            else if(numbers[l] + numbers[r] > target) r--;
            else l++;

        }
        return {};
    }
};
