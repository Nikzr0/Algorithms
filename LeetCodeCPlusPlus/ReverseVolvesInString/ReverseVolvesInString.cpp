#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
        vector<int> positions;
        vector<char> vowelChars;

        for (int i = 0; i < s.size(); i++) {
            if (vowels.find(s[i]) != vowels.end()) {
                positions.push_back(i);
                vowelChars.push_back(s[i]);
            }
        }

        for (int i = positions.size() - 1; i >= 0; i--)
        {
            s[positions[i]] = vowelChars[positions.size() - 1 - i];
        }

        return s;
    }
};

int main()
{
	string s = "leetcode";
	Solution solution;
	cout << solution.reverseVowels(s) << endl;
	return 0;
}
