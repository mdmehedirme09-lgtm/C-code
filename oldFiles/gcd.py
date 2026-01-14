def gcd_iterative(a, b):
    """Find GCD using iterative Euclidean algorithm"""
    # Handle negative numbers
    a, b = abs(a), abs(b)
    
    while b != 0:
        a, b = b, a % b
    
    return a

# Example usage
num1, num2 = 48, 18
result = gcd_iterative(num1, num2)
print(f"GCD of {num1} and {num2} is: {result}")