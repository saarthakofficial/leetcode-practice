class Solution {
public:
    int splitNum(int num) {
        int num1 = 0;
        int num2 = 0;
        vector<int> numbers;
        while (num > 0) {
            numbers.push_back(num % 10);
            num = num / 10;
        }
        sort(numbers.begin(), numbers.end());
        
        for (int i = 0; i <= numbers.size() - 1; i += 2) {
            num1 = num1 * 10 + numbers[i];
            if (i + 1 < numbers.size()) {
                num2 = num2 * 10 + numbers[i + 1];
            }
        }
        
        return (num1 + num2);
    }
};
