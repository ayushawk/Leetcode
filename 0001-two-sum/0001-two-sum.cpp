class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        vector<int> arr;

        for(int i=0; i<length-1; i++){
            for(int j=i+1; j<length; j++){
                if((nums[i] + nums[j]) == target){
                    arr.push_back(i);
                    arr.push_back(j);
                    break;
                }
            }
        }
        return arr;
    }
};