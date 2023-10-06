class Solution {
public:
    long long int mySqrt(int x) {
        int s = 0;
        int e = x;
        long long int mid = s + (e-s)/2;
        int ans;
        while(s<=e){
            if (mid*mid<x){
                ans = mid;
                s = mid + 1;
            }
            else if (mid*mid == x){
                return mid;
            }
            else{
                e = mid - 1; 
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};