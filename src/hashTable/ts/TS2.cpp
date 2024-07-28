#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class TS2
{
public:
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
    {
        unordered_map<int, int> map;
        for (int n1: nums1)
        {
            for (int n2: nums2)
            {
                ++map[n1 + n2];
            }
        }
        int ans = 0;
        for (int n3: nums3)
        {
            for (int n4: nums4)
            {
                ans = map.count(-n3 - n4) ? ans + map[-n3 - n4] : ans;
            }
        }
        return ans;
    }
};
