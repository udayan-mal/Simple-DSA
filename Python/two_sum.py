# LeetCode Two Sum Problem
# This script defines a function to solve the Two Sum problem and provides a simple CLI for demonstration.
# The function returns the indices of the two numbers such that they add up to a specific target.
# Author: Hacktoberfest contributor


def two_sum(nums, target):
    """Return indices of the two numbers such that they add up to target.

    Args:
        nums (list of int): List of integers.
        target (int): Target sum.

    Returns:
        list of int: Indices of the two numbers.

    Raises:
        ValueError: If no solution is found.
    """
    lookup = {}
    for idx, num in enumerate(nums):
        complement = target - num
        if complement in lookup:
            return [lookup[complement], idx]
        lookup[num] = idx
    raise ValueError("No two sum solution exists")


if __name__ == "__main__":
    nums = list(map(int, input("Enter numbers separated by space: ").split()))
    target = int(input("Enter target: "))
    try:
        result = two_sum(nums, target)
        print("Indices:", result)
    except ValueError as e:
        print(e)
