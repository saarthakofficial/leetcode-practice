class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> answer(boxes.size());
        for (int i=0; i<boxes.size(); i++){
            for (int j=0; j<boxes.size(); j++){
                if (boxes[j] == '1'){
                    answer[i]+=abs(i-j);
                }
            }
        }
        return answer;
    }
};