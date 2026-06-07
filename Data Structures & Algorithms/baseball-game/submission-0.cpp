class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        stack<int> st;

        for(int i=0;i<n;i++){
            if(operations[i] == "+"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.push(n1);
                st.push(n1+n2);
            }
            else if(operations[i] == "D"){
                st.push(st.top() * 2);
            }
            else if(operations[i] == "C"){
                st.pop();
            }
            else{
                int x = stoi(operations[i]);
                st.push(x);
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};