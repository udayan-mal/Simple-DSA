"""
armstrong_number.py

Simple program to check if a given integer is an Armstrong number.

Usage (interactive):
    python armstrong_number.py

Usage (command-line argument):
    python armstrong_number.py 153

Function:
    is_armstrong(number: int) -> bool

An Armstrong (narcissistic) number is an integer such that the sum of its digits
raised to the power of the number of digits equals the number itself.
Examples: 0, 1, 153, 370, 371, 9474
"""

from typing import Any
import sys


def is_armstrong(number: int) -> bool:
    """Return True if number is an Armstrong number, False otherwise.

    Negative numbers are not considered Armstrong numbers in this implementation.
    """
    if number < 0:
        return False
    digits = str(number)
    power = len(digits)
    total = sum(int(d) ** power for d in digits)
    return total == number


def _cli(argv: Any = None) -> int:
    """Simple CLI entry point. Returns exit code (0 on success).

    If a number is provided as first argument it checks that number; otherwise
    it prompts interactively.
    """
    argv = argv if argv is not None else sys.argv
    try:
        if len(argv) >= 2:
            s = argv[1]
        else:
            s = input("Enter an integer to check if it is an Armstrong number: ")
        n = int(s)
    except ValueError:
        print("Please enter a valid integer.")
        return 2

    if is_armstrong(n):
        print(f"{n} is an Armstrong number.")
    else:
        print(f"{n} is NOT an Armstrong number.")
    return 0


if __name__ == "__main__":
    raise SystemExit(_cli())
