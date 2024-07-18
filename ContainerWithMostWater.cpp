#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxArea = INT_MIN;
        while(left<right){
            int currentArea = min(height[left],height[right]) * (right -left);
            maxArea = max(maxArea,currentArea);
            if(height[left]<=height[right]){
                left ++;
            }else{
                right--;
            }
        }
        return maxArea;

    }
};

/*Initialization:

Set two pointers, left and right, to the beginning and end of the height vector respectively (indices 0 and height.size()-1).
Initialize a variable maxArea to 0 to store the maximum area found so far.
Iterate through potential containers:

Use a while loop that continues as long as left is less than right. This ensures we explore all possible pairs of heights in the vector.
Calculate current area:

Inside the loop, calculate the area of water that could be contained between the current left and right elements. This is done by finding the minimum height between height[left] and height[right] (limiting factor) and multiplying it by the width of the container (right - left).
Update maximum area:

Compare the calculated currentArea with the previously found maxArea. If currentArea is larger, update maxArea to reflect the new maximum.
Move pointers strategically:

The key to finding the maximum area lies in strategically moving the left and right pointers. Here's the logic:
Else if (height[left] <= height[right]):
If the height at left is less than or equal to the height at right, the limiting factor for the water level is likely the height at left.
We can potentially increase the container width by moving the left pointer one step to the right (assuming a higher wall might be found on the right). This could potentially lead to a larger container area.
Else:
If the height at left is greater than the height at right, the limiting factor is likely the height at right.
We can potentially increase the container height by moving the right pointer one step to the left (assuming a higher wall might be found on the left). This could potentially lead to a larger container area.
Return result:

After iterating through all possible pairs of heights, the function returns the maxArea which represents the maximum amount of water that could be contained between any two lines formed by the heights in the vector.*/