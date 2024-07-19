class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        int n = nums.size();
        while(j<n){
            if(nums[i]==0 && nums[j]==0){
                j++;
            }else{
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
        // set the pointers in index 0 
        // if index 0 has value zero move right pointer
        // else swap ith and jth element
            
        
    }
};