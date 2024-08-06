/********************************************************************************
* @author: KaelviHN
* @email: araneidasword@gmail.com
* @date: 2024/8/5 21:53
* @version: 1.0
* @description: 四数之和 https://leetcode.cn/problems/4sum/description/
********************************************************************************/
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
        vector<vector<int> > res;
        // 长度小于4，不符合要求
        if (nums.size() < 4) {
            return res;
        }
        // 排序
        sort(nums.begin(), nums.end());
        int len = nums.size();
        for (int i = 0; i < len - 3; ++i) {
            // 1，2号位相同
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            for (int j = i + 1; j < len; ++j) {
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                // 最小值大于target
                if ((long) nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target) {
                    break;
                }
                // 最小值大于target
                if ((long) nums[i] + nums[j] + nums[len - 2] + nums[len - 1] < target) {
                    continue;
                }
                int left = j + 1, right = len - 1;
                while (left < right) {
                    long sum = (long) nums[i] + nums[j] + nums[left] + nums[right];
                    // 符合要求
                    if (sum == target) {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        // left < right && 剪枝
                        while (left < right && nums[left] == nums[left + 1]) {
                            ++left;
                        }
                        ++left;
                        // left < right && 剪枝
                        while (left < right && nums[right] == nums[right - 1]) {
                            right--;
                        }
                        right--;
                    }else if (sum > target) {
                        // left < right && 剪枝
                        while (left < right && nums[right] == nums[right - 1]) {
                            right--;
                        }
                        right--;
                    }else {
                        // left < right && 剪枝
                        while (left < right && nums[left] == nums[left + 1]) {
                            ++left;
                        }
                        ++left;
                    }
                }
            }
        }
        return res;
    }
};


