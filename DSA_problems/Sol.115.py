from typing import List

def find_closest_to_zero(nums: List[int]) -> int:
    if not nums:
        return 0
        
    closest = nums[0]
    for num in nums:
        if abs(num) < abs(closest):
            closest = num
        elif abs(num) == abs(closest):
            closest = min(num, closest)
            
    return closest

def main():
    nums = list(map(int, input("Enter space-separated numbers: ").split()))
    result = find_closest_to_zero(nums)
    print(f"Number closest to zero: {result}")

if __name__ == "__main__":
    main()
