class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(nums[j]==nums[j-1]&& j<k){
                        j++;
                    }
                }
            }
        }
        return ans;
    }
};

/*
Initialization:

n is set to the size of the input vector nums.
An empty vector ans is created to store the triplets that will be returned.
The input vector nums is sorted using the sort function. Sorting is crucial for this algorithm to work efficiently.
Iterating through the first element:

A loop iterates from i=0 to i<n. This loop goes through each element in the sorted vector nums.
Inside the loop, there's a check to avoid duplicate triplets. If the current element nums[i] is the same as the previous element nums[i-1], it means we've already processed this element and its combinations. So, the loop skips to the next element using continue.
Two-pointer approach:

Two pointers, j and k, are initialized. j starts one element ahead of i (j = i + 1) and k starts from the last element (k = n - 1).
A while loop continues as long as j is less than k. This loop iterates through potential pairs that could combine with the fixed element (nums[i]) to form a triplet that sums to zero.
Checking the sum:

Inside the while loop, the sum of the three elements (nums[i], nums[j], and nums[k]) is calculated and stored in sum.
There are three cases based on the value of sum:
sum > 0: This means the current triplet's sum is positive. Since the array is sorted, we need a smaller element to reduce the sum. So, we decrement the k pointer to move towards the beginning of the array.
sum < 0: This means the current triplet's sum is negative. We need a larger element to increase the sum. So, we increment the j pointer to move towards the end of the array.
sum == 0: This is the desired case! We have found a triplet that adds up to zero. The triplet (nums[i], nums[j], nums[k]) is pushed back into the ans vector.
Skipping duplicate pairs:

After finding a valid triplet, another while loop is used to skip duplicate pairs involving j. This ensures that we don't add the same triplet multiple times even if k changes. The loop continues as long as nums[j] is the same as the previous element nums[j-1] and j is less than k.
Returning the result:

After iterating through all possible combinations using i, j, and k pointers, the function returns the ans vector containing all the unique triplets found in the input nums that add up to zero.*/