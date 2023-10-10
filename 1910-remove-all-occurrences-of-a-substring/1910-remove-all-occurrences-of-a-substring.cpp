class Solution {
public:
    string removeOccurrences(string s, string part) {
        for (int i = 0; i <= s.size(); i++){
            if (s.substr(0,i).find(part) != string::npos){
                s.erase(i-part.size(),part.size());
                i -= part.size();
            }
            
        }
        return s;
    }
};