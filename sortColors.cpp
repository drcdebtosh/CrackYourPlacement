class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i, j, temp;
    for (i = 0; i < nums.size() - 1; i++) {
    for (j = 0; j < nums.size() - i - 1; j++) {
      if (nums[j] > nums[j + 1]) {
        // Swap elements
        temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
      }
    }
  }
    }
};