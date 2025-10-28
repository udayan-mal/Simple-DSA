"""
q2_factorial.py
Compute factorial of a non-negative integer.

Usage:
  python q2_factorial.py 5
  python q2_factorial.py --method=iterative 10
  python q2_factorial.py          # prompts for input

Supports methods: math (uses math.factorial), iterative, recursive
"""
import argparse
import math
import sys


def factorial_iterative(n: int) -> int:
    res = 1
    for i in range(2, n + 1):
        res *= i
    return res
# q2_factorial.py
import argparse
import math


def factorial_math(n: int) -> int:
    return math.factorial(n)


def factorial_iterative(n: int) -> int:
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result


def factorial_recursive(n: int) -> int:
    if n <= 1:
        return 1
    return n * factorial_recursive(n - 1)


def parse_args():
    parser = argparse.ArgumentParser(description="Compute factorial of a non-negative integer")
    parser.add_argument("n", nargs="?", type=int, help="Non-negative integer")
    parser.add_argument("--method", choices=["math", "iterative", "recursive"], default="math",
                        help="Method to compute factorial (default: math)")
    return parser.parse_args()


def main():
    args = parse_args()

    if args.n is None:
        try:
            s = input("Enter a non-negative integer: ")
        except EOFError:
            print("No input provided.")
            sys.exit(1)
        try:
            n = int(s)
        except ValueError:
            print("Invalid integer.")
            sys.exit(1)
    else:
        n = args.n

    if n < 0:
        print("Factorial is not defined for negative integers.")
        sys.exit(1)

    method = args.method
    if method == "math":
        res = math.factorial(n)
    elif method == "iterative":
        res = factorial_iterative(n)
    else:
        # recursive
        # Note: Python recursion limit may be hit for large n
        res = factorial_recursive(n)

    print(f"Factorial of {n} is {res}")
def main():
    parser = argparse.ArgumentParser(
        description="Compute factorial of a non-negative integer using different methods."
    )
    parser.add_argument(
        "number",
        type=int,
        help="Non-negative integer for which to compute the factorial.",
    )
    parser.add_argument(
        "-m",
        "--method",
        choices=["math", "iterative", "recursive"],
        default="math",
        help="Method to use for factorial computation: math, iterative, or recursive.",
    )

    args = parser.parse_args()

    n = args.number
    if n < 0:
        print("Error: Please provide a non-negative integer.")
        return

    if args.method == "math":
        result = factorial_math(n)
    elif args.method == "iterative":
        result = factorial_iterative(n)
    elif args.method == "recursive":
        result = factorial_recursive(n)

    print(f"Factorial of {n} using '{args.method}' method: {result}")


if __name__ == "__main__":
    main()
