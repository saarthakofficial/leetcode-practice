class Solution {
public:
    int myAtoi(string s) {
        long long i = 0;
        bool start = false;
        int sign = 1;
        int index = 0;

        while (index < s.size()){
            char c = s[index];
            
            if (c == ' ' && !start){
                index++;
                continue;
            }
            
            if (!start){
                if (c == '+'){
                    start = true;
                    index++;
                }
                else if (c == '-'){
                    sign = -1;
                    start = true;
                    index++;
                }
                else if (c >= '0' && c <= '9'){
                    start = true;
                    i = c - '0';
                    index++;
                }
                else{
                    break;
                }
            }
            else{
                if (c >= '0' && c <= '9'){
                    int digit = c - '0';
                    i = i * 10 + digit;
                    
                    if (sign == 1 && i > INT_MAX){
                        return INT_MAX;
                    }
                    if (sign == -1 && -i < INT_MIN){
                        return INT_MIN;
                    }
                    
                    index++;
                }
                else{
                    break;
                }
            }
        }
        
        return sign * i;
    }
};