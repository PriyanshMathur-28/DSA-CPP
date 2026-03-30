class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int odd=1;
        int even=0;
        while(odd<nums.size() && even<nums.size())
        {
            if(nums[odd]%2==1)
                odd+=2;
            if(nums[even]%2==0)
                even+=2;
            else
                swap(nums[odd],nums[even]);
        }
        return nums;
    }
};