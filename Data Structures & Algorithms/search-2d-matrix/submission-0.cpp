class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();

        int st=0, end=r*c-1;

        while(st<=end){
            int mid = st+(end-st)/2;

            int row = mid/c;
            int col = mid%c;

            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] > target) end = mid-1;
            else st = mid+1;
        }
        return false;
    }
};
