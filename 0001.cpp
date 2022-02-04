class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        int size = nums.size();
        
        for(int idx1 = 0; idx1 < size; idx1++)
        {
            for(int idx2 = idx1 + 1; idx2 < size; idx2++)
            {
                if(nums[idx1] + nums[idx2] == target)
                {
                    output.push_back(idx1);
                    output.push_back(idx2);
                    return output;
                }
            }
        }
        return output;
    }
};