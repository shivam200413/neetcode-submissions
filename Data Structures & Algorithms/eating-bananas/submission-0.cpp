class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int mini = 1;
        int maxi = *max_element(piles.begin(), piles.end());

        while(mini <= maxi){
            int mid = mini+(maxi-mini)/2;

            long long hours = 0;

            for(int pile : piles){
                hours += (pile + mid-1)/mid;
            }

            if(hours <= h) maxi = mid-1;
            else mini = mid+1;
        }
        return mini;
    }
};
