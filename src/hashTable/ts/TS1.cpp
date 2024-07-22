#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;


class TS1
{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // k -> num ; v -> idx
        map<int, int> temp;
        // 遍历集合
        for (int i = 0; i < nums.size(); ++i) {
            // 查看是否存在符合要求的组合
            int item = nums[i];
            auto pair = temp.find(target - item);
            // 不存在则存入
            if (pair != temp.end()) {
                return {i,pair->second};
            }
            temp[nums[i]] = i;

        }
        return {};
    }
};
