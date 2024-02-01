class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        vector<int> arr;
        int flag = 0;
        for(int i=0; i<length-1; i++){
            for(int j=i+1; j<length; j++){
                if((nums[i] + nums[j]) == target){
                    flag = 1; 
                    arr.push_back(i);
                    arr.push_back(j);
                }
            }
            if(flag == 1){
                break;
            }
        }
        return arr;
    }
};