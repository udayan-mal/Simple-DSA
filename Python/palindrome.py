def is_palindrome_number(n: int) -> bool:
    """Return True if integer n is a palindrome.

    Negative numbers are not considered palindromes (because of the '-' sign).
    """
    if n < 0:
        return False
    s = str(n)
    return s == s[::-1]


if __name__ == "__main__":
    try:
        s = input("Enter an integer: ").strip()
        n = int(s)
    except ValueError:
        print("Invalid input. Please enter an integer.")
        raise SystemExit(1)

    if is_palindrome_number(n):
        print(f"{n} is a palindrome")
    else:
        print(f"{n} is not a palindrome")
