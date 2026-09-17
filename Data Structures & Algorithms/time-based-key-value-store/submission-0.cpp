class TimeMap {
public:

    unordered_map<string, vector<pair<int, string>>> store;

    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        store[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if(store.find(key) == store.end()) return "";
        const auto& values = store[key];

        int l=0;
        int r=values.size()-1;
        string result="";

        while(l<=r){
            int mid = l+(r-l)/2;

            if(values[mid].first <= timestamp){
                result=values[mid].second;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return result;
    }
};
