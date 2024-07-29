class Solution {
public:
    bool check(vector<int>& nums) {
        int breakpoint=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(i==0 && nums[n-1]>nums[i]){
                breakpoint++;
            }
            if(nums[i]>nums[i+1])
            {
                breakpoint++;
            }
            if(breakpoint>1){
                return false;
            }
        }
        return true;
    }
    
};