class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==pivot)
                count++;
            if(nums[i]<pivot)
                ans.push_back(nums[i]);
        }
        while(count!=0)
        {
            ans.push_back(pivot);
            count--;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>pivot)
                ans.push_back(nums[i]);
        }
        return ans;
    }
};