#include <iostream>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (magazine.length() < ransomNote.length()) {
            return false;
        }
        int temp[26];
        for (char element : magazine) {
            ++temp[element-'a'];
        }
        for (char element: ransomNote) {
            int t = element-'a';
            if (temp[t] == 0) {
                return false;
            }
            --temp[t];
        }
        return true;
    }
};
