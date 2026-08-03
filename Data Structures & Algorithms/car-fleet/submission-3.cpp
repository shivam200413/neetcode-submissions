class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> cars(n);
        
        for(int i=0;i<n;i++){
            cars[i] = {position[i], speed[i]};
        }
        sort(cars.rbegin(), cars.rend());

        int fleets = 0;
        double slow = 0.0;

        for(int i=0;i<n;i++){
            double time = (double)(target - cars[i].first)/cars[i].second;
            if(time > slow){
                fleets++;
                slow = time;
            }
        }
        return fleets;
    }
};
