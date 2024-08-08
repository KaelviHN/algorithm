/********************************************************************************
* @author: KaelviHN
* @email: araneidasword@gmail.com
* @date: 2024/8/6 21:52
* @version: 1.0
* @description:https://leetcode.cn/problems/reverse-words-in-a-string/  151. 反转字符串中的单词
********************************************************************************/


#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string res;
        vector<string> tmp;
        int slow = 0, fast = 0;
        while(fast < s.size()) {
            if (fast>slow && s[fast] == ' ') {
                tmp.push_back(s.substr(slow, fast-slow));
                slow = fast;
            } else if (fast == s.size() - 1 && s[fast] != ' ') {
                tmp.push_back(s.substr(slow, fast-slow +1));
            }

            if (s[slow] == ' ') {
                slow ++;
            }
            fast ++;
        }
        for(int i = tmp.size() - 1; i>=0; i--) {
            if (i == 0) {
                res += tmp[i];
            } else {
                res += tmp[i] + " ";
            }
        }
        return res;
    }
};