def find_closest_to_zero(nums):
    closest = nums[0]

    for num in nums:
        if abs(num) < abs(closest):
            closest = num
        elif abs(num) == abs(closest) and num < closest:
            closest = num  

    return closest

print(find_closest_to_zero([-4, -2, 1, 4, 8]))  
print(find_closest_to_zero([-5, 5]))            
