# Program to calculate standard deviation manually

# Function to calculate standard deviation
def calculate_std_dev(data):
    n = len(data)
    mean = sum(data) / n
    
    # Calculate variance
    variance = sum((x - mean) ** 2 for x in data) / n  # For population SD
    # variance = sum((x - mean) ** 2 for x in data) / (n - 1)  # For sample SD
    
    std_dev = variance ** 0.5
    return std_dev

# Example usage
numbers = [10, 12, 23, 23, 16, 23, 21, 16]
print("Standard Deviation:", calculate_std_dev(numbers))
