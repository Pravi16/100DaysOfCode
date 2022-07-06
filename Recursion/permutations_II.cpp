class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        do
        {
            vector<int>here(nums.begin(),nums.end());
            ans.push_back(here);
        }while(next_permutation(nums.begin(),nums.end()));
        return ans;
    }
};