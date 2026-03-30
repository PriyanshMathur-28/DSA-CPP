class Solution {
public:
    vector<int> diStringMatch(string s) {
        int maxi=s.size();
        int mini=0;
        vector<int> ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I')
            {
                ans.push_back(mini);
                mini++;
            }
            else
            {
                ans.push_back(maxi);
                maxi--;
            }
        }
        ans.push_back(mini);
        return ans;
    }
};