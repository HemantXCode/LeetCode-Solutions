class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                k=i;
                break;
            }
            if(nums[i] >target){
                k=i;
                break;
            }
        }
        return k;
    }
};