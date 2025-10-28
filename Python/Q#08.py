# Q308: Check if a number is a perfect number

# A perfect number is a number that is equal to the sum of its positive divisors, excluding itself.
# Example: 28 → divisors are 1, 2, 4, 7, 14 → sum = 28 → so it's perfect.

def is_perfect_number(n: int) -> bool:
    if n <= 1:
        return False
    divisor_sum = 1  # 1 is always a divisor
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            divisor_sum += i
            if i != n // i:  # avoid double counting
                divisor_sum += n // i
    return divisor_sum == n

# Example usage
if __name__ == "__main__":
    num = int(input("Enter a number: "))
    if is_perfect_number(num):
        print(f"{num} is a perfect number.")
    else:
        print(f"{num} is NOT a perfect number.")
