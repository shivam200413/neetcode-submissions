class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        int sign = x<0 ? -1 : 1;
        x = abs((long long)x);

        while(x){
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        rev *= sign;

        return (rev <INT_MIN || rev >INT_MAX) ? 0 : rev;
    }
};
