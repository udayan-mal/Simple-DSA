def merge_alternately(word1: str, word2: str) -> str:
    merged = []
    i = 0
    while i < len(word1) or i < len(word2):
        if i < len(word1):
            merged.append(word1[i])
        if i < len(word2):
            merged.append(word2[i])
        i += 1
    return ''.join(merged)

def main():
    word1 = input("Enter first word: ")
    word2 = input("Enter second word: ")
    result = merge_alternately(word1, word2)
    print(f"Merged string: {result}")

if __name__ == "__main__":
    main()