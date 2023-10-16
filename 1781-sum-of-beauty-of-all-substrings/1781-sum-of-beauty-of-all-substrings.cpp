class Solution {
public:
  int beautySum(string s) {
        int ans = 0;
        int n = s.size();
        for(int i=0; i<n; i++) {
            int count[26] = {};
            int max_f = INT_MIN;
            int min_f = INT_MAX;
            for(int j=i; j<n; j++) {
                int ind = s[j] - 'a';
                count[ind]++;
                max_f = max(max_f, count[ind]);
                min_f = count[ind];
                for(int k=0; k<26; k++) {
                    if(count[k] >= 1)
                        min_f = min(min_f, count[k]);
                }
                ans += (max_f - min_f);
            }
        }
        return ans;
    }
};