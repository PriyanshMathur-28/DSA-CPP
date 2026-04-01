class NumArray {
public:
    vector<int> prefix;
    NumArray(vector<int>& nums) 
    {
        prefix.push_back(nums[0]);
        int prev=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int curr=prev+nums[i];
            prefix.push_back(curr);
            prev=curr;
        }
    }
    
    int sumRange(int left, int right) {
    
        return prefix[right+1]-prefix[left];
    }
};

