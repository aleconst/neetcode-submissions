class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ci = 0, cj = 0;
        unordered_map<int, int> mp;
        int diff = target;

        for (int i = 0; i < nums.size(); i++)
            if (mp.find(nums[i]) == mp.end())
                mp[nums[i]] = i;

        for (int i = 0; i < nums.size(); i++)
        {
            diff = target;
            diff -= nums[i];
            auto iter = mp.find(diff);
            if (iter != mp.end() && iter->second != i)
            {
                ci = i;
                cj = iter->second;
                break;
            }
        }

        return {min(ci, cj), max(ci, cj)};
    }
};
