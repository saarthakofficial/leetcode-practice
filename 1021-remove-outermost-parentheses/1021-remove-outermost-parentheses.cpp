class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int a = 0;
        for (char c : s){
            if (c=='(' && a==0){
                a++;
            }
            else if (c=='(' && a>=1){
                ans.push_back(c);
                a++;
            }
            else if (c==')' && a>1){
                ans.push_back(c);
                a--;
            }
            else if (c==')' && a==1){
                a--;
            }
        }
        return ans;
    }
};