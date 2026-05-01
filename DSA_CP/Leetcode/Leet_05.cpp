// leetcode 5: Longest Palindromic Substring
#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0, maxLen = 1;

        for(int i = 0; i < n; i++) {
            // odd length palindrome
            expand(s, i, i, start, maxLen);

            // even length palindrome
            expand(s, i, i + 1, start, maxLen);
        }

        return s.substr(start, maxLen);
    }

private:
    void expand(string &s, int L, int R, int &start, int &maxLen) {
        while(L >= 0 && R < s.size() && s[L] == s[R]) {
            if(R - L + 1 > maxLen) {
                start = L;
                maxLen = R - L + 1;
            }
            L--;
            R++;
        }
    }
};