class Solution {
public:
    int minimumOperations(string num) {
        int n = num.size();
        stack<char> digits;
        stack<char> five;
        stack<char> zero;

        for (int i = n - 1; i >= 0; i--) {
            char c = num[i];

            if (c == '0' && zero.size() == 0) {
                zero.push('0');
            }
            else if (zero.size() == 1 && (c == '0' || c == '5')) {
                return (int)digits.size() + (int)five.size();
            }
            else if (c == '5' && five.size() == 0) {
                five.push('5');
            }
            else if (five.size() == 1 && (c == '2' || c == '7')) {
                return (int)digits.size() + (int)zero.size();
            }
            else {
                digits.push(c);
            }
        }

        return (int)digits.size() + (int)five.size();
    }
};