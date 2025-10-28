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
