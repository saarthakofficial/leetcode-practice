class Solution {
public:
    bool isValid(char c){
        if ((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
            return true;
        }
        return false;
    }
    char lowerCase(char c){
        char lower;
        if ((c>='a' && c<='z') || (c>='0' && c<='9')){
            return c;
        }
        else if (c>='A' && c<='Z'){
            lower = c - 'A' + 'a';
            return lower;
        }
        return c;
    }
    bool isPalindrome(string s){
        string temp = "";
        for (int i = 0; i <= s.size() - 1; i++){
            if (isValid(lowerCase(s[i]))){
                temp.push_back(lowerCase(s[i]));
            }
        }
        for (int j = 0; j < (temp.size()/2); j++){
            if (temp[j]!=temp[temp.size()-1-j]){
                return false;
            }
        }
        return true;
    }
};