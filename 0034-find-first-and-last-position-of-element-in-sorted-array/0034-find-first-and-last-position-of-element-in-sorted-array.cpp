class Solution {
public:
    int firstOccurence(vector<int> arr, int n, int key){
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2;
        int ans = -1;
        while (s<=e){
            if (key == arr[mid]){
                ans = mid;
                e = mid - 1;
            }
            else if (key > arr[mid]){
                s = mid + 1;
            }
            else if (key < arr[mid]){
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
    int lastOccurence(vector<int> arr, int n, int key){
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2;
        int ans = -1;
        while (s<=e){
            if (key == arr[mid]){
                ans = mid;
                s = mid + 1;
            }
            else if (key > arr[mid]){
                s = mid + 1;
            }
            else if (key < arr[mid]){
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstOcc = firstOccurence(nums, nums.size(), target);
        int lastOcc = lastOccurence(nums, nums.size(), target);
        vector<int> ans;
        ans.push_back(firstOcc);
        ans.push_back(lastOcc);
        return ans;
    }
};