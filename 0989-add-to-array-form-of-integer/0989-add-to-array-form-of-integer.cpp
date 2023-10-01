class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> other;
        while (k>0){
            int digit = k%10;
            k /= 10;
            other.push_back(digit);
        }
        reverse(other.begin(),other.end());
        int i = num.size() - 1;
        int j = other.size() - 1;
        int carry = 0;
        int sum = 0;
        vector<int> ans;
        while (i>=0 && j>=0){
            sum = num[i] + other[j] + carry;
                if (sum>=10){
                    ans.push_back(sum%10);
                    carry = sum/10;
                }
                else{
                    ans.push_back(sum);
                    carry = 0;
                }
            i--;
            j--;
        }
        
        while (i>=0){
            sum = num[i] + carry;
                if (sum>=10){
                    ans.push_back(sum%10);
                    carry = sum/10;
                }
                else{
                    ans.push_back(sum);
                    carry = 0;
                }
            
            i--;
        }
        
        while (j>=0){
            sum = other[j] + carry;
                if (sum>=10){
                    ans.push_back(sum%10);
                    carry = sum/10;
                }
                else{
                    ans.push_back(sum);
                    carry = 0;
                }
            
            j--;
        }
        if (carry!=0){
            ans.push_back(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};