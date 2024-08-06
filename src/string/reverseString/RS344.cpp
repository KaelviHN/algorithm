/********************************************************************************
* @author: KaelviHN
* @email: araneidasword@gmail.com
* @date: 2024/8/6 21:36
* @version: 1.0
* @description: https://leetcode.cn/problems/reverse-string/ 344. 反转字符串
********************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char> &s) {
        for (int begin = 0, end = s.size() - 1; begin < end; ++begin, --end) {
            /**
            *int temp = s[begin];
            s[begin] = s[end];
            s[end] = temp;
             */
            swap(s[begin],s[end]);
        }
    }
};

