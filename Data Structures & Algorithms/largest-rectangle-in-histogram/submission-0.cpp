class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int sol=0;
        heights.push_back(0);

        for(int i=0;i<=n;i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                int h = heights[st.top()];
                st.pop();

                int width;

                if(st.empty()){
                    width = i;
                }
                else{
                    width = i-st.top()-1;
                }
                sol = max(sol, h*width);
            }
            st.push(i);
        }
        return sol;
    }
};
