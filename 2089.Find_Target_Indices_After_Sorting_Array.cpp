class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        // for(int i = 0; i < nums.size(); i++) {
        //     if(nums[i] == target) {
        //         ans.push_back(i);
        //     }
        // }
        // return ans;
        int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
       // return ub - lb;
       for(int i = lb; i < ub; i++) ans.push_back(i);
       return ans;
    }
};
