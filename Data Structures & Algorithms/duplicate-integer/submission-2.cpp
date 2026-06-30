class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.empty()) return false;
        sort(nums.begin(),nums.end());
        int k1=nums[0];
        int k2;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            k2=nums[i];
        if(k1==k2){
            return true;
        }
        k1=k2;
        }
        return false;
  }  
};