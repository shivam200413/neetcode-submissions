class Solution {
public:
    bool isAnagram(string s, string t) {
        int sl = s.size();
        int tl = t.size();
        if(sl != tl) return false;
        unordered_map<char, int> s1,t1;

    for(char c: s) s1[c]++; 
    for(char c: t) t1[c]++;

    return s1 == t1; 
    }
};
