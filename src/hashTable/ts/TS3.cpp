#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class TS3 {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        auto begin = nums.begin();
        auto end = nums.end();
        if (*begin >= 0)
        while (end > begin) {
            while (*end + * begin < 0) {
                auto idx = end -1;

            }
        }
        vector<vector<int>> res;
    }
};


