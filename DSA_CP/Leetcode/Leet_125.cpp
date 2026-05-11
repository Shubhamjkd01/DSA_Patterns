#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
// LeetCode 125. Valid Palindrome
class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";

        for (char c : s) {
            if (isalnum(c)) {
                clean += tolower(c);
            }
        }

        int i = 0, j = clean.size() - 1;
        while (i < j) {
            if (clean[i] != clean[j]) return false;
            i++; 
            j--;
        }

        return true;
    }
};

