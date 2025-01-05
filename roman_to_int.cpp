#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    static int romanToInt(string s) {
        unordered_map<char, int> values = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && values[s[i]] < values[s[i + 1]]) {
                sum += values[s[i + 1]] - values[s[i]];
                i++;
            } else {
                sum += values[s[i]];
            }
        }
        return sum;
    }
};

int main() {
    double result = Solution::romanToInt("III");
    cout << "Number: " << result << endl;

    double result2 = Solution::romanToInt("LVIII");
    cout << "Number: " << result2 << endl;

    double result3 = Solution::romanToInt("MCMXCIV");
    cout << "Number: " << result3 << endl;


    return 0;
}
