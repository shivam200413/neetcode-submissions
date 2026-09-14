class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        unordered_map<char, int> window;

        for(char c : t){
            need[c]++;
        }

        int have = 0;
        int required = need.size();

        int l = 0;

        int minL = INT_MAX;
        int start = 0;

        for(int r = 0; r<s.length(); r++){
            char c = s[r];
            window[c]++;

            if(need.count(c) && window[c] == need[c]){
                have++;
            }

            while(have == required){
                if(r-l+1<minL){
                    minL = r-l+1;
                    start = l;
                }
                char lchar = s[l];
                window[lchar]--;

                if(need.count(lchar) && window[lchar] < need[lchar]){
                    have--;
                }
                l++;
            }
        }
        if(minL == INT_MAX) return "";

        return s.substr(start, minL);
    }
};