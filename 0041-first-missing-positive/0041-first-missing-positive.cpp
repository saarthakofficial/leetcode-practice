class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int k=1;
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==k){
                k++;
            }
        }
        return k;
    }
};