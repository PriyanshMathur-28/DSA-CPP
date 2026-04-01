class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int product=1;
        for(int i=n-1;i>=0;i--)
        {
            product*=nums[i];
            ans.push_back(product);
        }
        product=nums[0];
                for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        reverse(ans.begin(),ans.end());

        ans[0]=ans[1];
        for(int i=1;i<n-1;i++)
        {
            ans[i]=product*ans[i+1];
            product=product*nums[i];
        }
        ans[n-1]=product;
        return ans;        
    }
};