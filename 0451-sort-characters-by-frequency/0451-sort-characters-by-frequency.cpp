class Solution {
public:
    string frequencySort(string s) {
        vector<int> charCount(128, 0);

        for (char c : s) {
            charCount[c]++;
        }

        sort(s.begin(), s.end(), [&](char a, char b) {
            if (charCount[a] == charCount[b]) {
                return a > b;
            }
            return charCount[a] > charCount[b];
        });

        return s;
    }
};
