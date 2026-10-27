class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int pivot;
        int need;
        for(int i=0;i<nums.size();i++){
            pivot = nums[i];
            need = target-pivot;
            for(int j=i+1;j<nums.size();j++){
                if (nums[j]==need){
                    return{i,j};
                }

            } 

        }
        return{};
    }
};