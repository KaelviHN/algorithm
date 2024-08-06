/********************************************************************************
* @author: KaelviHN
* @email: araneidasword@gmail.com
* @date: 2024/8/6 21:36
* @version: 1.0
* @description: https://leetcode.cn/problems/reverse-string-ii/ 541. 反转字符串 II
********************************************************************************/
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        int len = s.length();
        for (int begin = 0; begin < len; begin += 2 * k) {
            reverse(s.begin() + begin, s.begin() + min(begin + k, len));
        }
        return s;
    }
};
