"""Simple program to find the length of a string using DSA logic.

This version is intentionally minimal and uses an explicit DSA-style
iteration to count characters (no use of Python's built-in len()).

Behaviour:
- Reads a line of input from the user
- Counts the characters by iterating and incrementing a counter
- Prints the length as an integer

Time complexity: O(n)
Space complexity: O(1) extra
"""

def length_dsa(s: str) -> int:
    """Return the length of s by iterating through characters.

    This avoids using len() to demonstrate DSA-style manual counting.
    """
    count = 0
    for _ in s:
        count += 1
    return count


def main() -> None:
    try:
        s = input("Enter a string: ")
    except EOFError:
        # No input provided (e.g., piping without content) — treat as empty
        s = ""

    result = length_dsa(s)
    print(result)


if __name__ == "__main__":
    main()
