#63. Program to find Container with most water (LeetCode 11),Python
#Problem Statement:
#You are given an integer array height of length n. Each element represents the height of a vertical line drawn at position i.
#Find two lines that together with the x-axis form a container, such that the container holds the most water.
#Return the maximum amount of water a container can store.

#Example:
#Input: height = [1,8,6,2,5,4,8,3,7]
#utput: 49
#Explanation: The lines at indices 1 and 8 form the container with the maximum area = min(8,7) * (8-1) = 7 * 7 = 49.


def max_area(height):
    left = 0
    right = len(height) - 1
    max_water = 0

    while left < right:
        # Calculate the area
        width = right - left
        area = min(height[left], height[right]) * width
        max_water = max(max_water, area)

        # Move the pointer with the smaller height
        if height[left] < height[right]:
            left += 1
        else:
            right -= 1
    
    return max_water