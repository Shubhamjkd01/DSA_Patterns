// LeetCode 917. Reverse Only Letters
#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right){
         if(!isalpha(s[left])){
             left++;
            }
         else if(!isalpha(s[right])){
            right--;
            }
         else{
             swap(s[left], s[right]);
              left++;
            right--;
            }
        }
        return s;
    }
};