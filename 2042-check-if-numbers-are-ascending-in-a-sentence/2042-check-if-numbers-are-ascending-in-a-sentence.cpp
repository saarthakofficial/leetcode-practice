class Solution {
public:
    bool areNumbersAscending(string s) {
        int previousNum = 0;
        for(int i = 0; i < s.size(); i++) {
            if(isdigit(s[i])) {
                int currentNum = 0;
                while(isdigit(s[i])){
                    currentNum = (currentNum * 10) + (s[i++] - '0');
                }
                if(previousNum != 0 && previousNum >= currentNum){
                    return false;
                }
                else{
                    previousNum = currentNum;
                }
            }
        }
        return true;
    }
};