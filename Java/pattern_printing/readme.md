# Pattern Printing



## Overview

This repository contains a curated set of classic pattern-printing programs used commonly for learning loops, nested loops, conditionals, and basic I/O in programming. Patterns are presented with: 1) a small ASCII preview, 2) the algorithm idea, and 3) short sample implementations (C, Java, c++). Use these to practice control flow, indexing, and formatting output.

## Languages

Examples provided for:

* C
* C++ (where applicable)
* Java
* Python

Files are organized by pattern name and language (e.g. `pyramid/python/pyramid.py`).

---

## Patterns Included

1. **Left-aligned Triangle**

   * Example (n=4):

     ```
     *
     **
     ***
     ****
     ```
   * Idea: For each row i from 1..n print i stars.

2. **Right-aligned Triangle**

   * Example (n=4):

     ```
        *
       **
      ***
     ****
     ```
   * Idea: Print (n-i) spaces then i stars.

3. **Centered Pyramid**

   * Example (n=4):

     ```
        *
       ***
      *****
     *******
     ```
   * Idea: For row i print (n-i) spaces and (2*i-1) stars.

4. **Inverted Pyramid**

   * Example (n=4):

     ```
     *******
      *****
       ***
        *
     ```

5. **Number Triangle**

   * Example (n=4):

     ```
     1
     12
     123
     1234
     ```
   * Variants: increasing numbers, row-wise repeated number, mirrored numbers.

6. **Floyd's Triangle**

   * Example (n=4):

     ```
     1
     2 3
     4 5 6
     7 8 9 10
     ```
   * Idea: Maintain a counter that increments across the triangle.

7. **Diamond Pattern**

   * Example (n=3):

     ```
      *
     ***
     ```

   ---

   ---

   *

   ```
   - Idea: Combine pyramid (1..n) and inverted pyramid (n-1..1).

   ```

8. **Pascal's Triangle (printing values)**

   * Example (n=5):

     ```
         1
        1 1
       1 2 1
      1 3 3 1
     1 4 6 4 1
     ```
   * Idea: Use combinatorics (nCk) or build rows iteratively.

9. **Hollow Pyramid / Hollow Square**

   * Prints border stars and spaces inside.

10. **Alphabet Triangle**

    * Example:

      ```
      A
      AB
      ABC
      ABCD
      ```

---

## Sample Implementations


### Left-aligned Triangle — C

```c
#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
```

### Floyd's Triangle — Java

```java
import java.util.Scanner;
public class FloydTriangle {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int num = 1;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= i; j++) {
        System.out.print(num++ + " ");
      }
      System.out.println();
    }
    sc.close();
  }
}
```

---

## How to Use

1. Clone the repo.
2. Pick a pattern folder (e.g. `pyramid`).
3. Open the language subfolder and run the example file.

   * C++: `g++ file.cpp -o name && ./name`
   * C: `gcc file.c -o file && ./file`
   * Java: `javac File.java && java File`
4. Try changing `n` and observe behavior. Convert one pattern implementation into another language as practice.

---

## Exercises & Challenges

* Make each pattern accept a character (not just `*`).
* Print each pattern with numbers that follow a formula (e.g., arithmetic progressions).
* Create a function for each pattern that returns a string (useful for unit tests).
* Add width/height validation and nice error messages.

---

## Contribution Guideline

* Add a new folder for your pattern with the naming convention: `pattern-name/language/`.
* Include a `README.md` inside the pattern folder explaining the logic and time complexity (if applicable).
* Provide sample input and expected output and at least one implementation.

---

## License

This repo is under the MIT License. Feel free to reuse and adapt the code for learning and teaching.

---

If you want, I can also generate:

* A repo structure (file tree) with starter files for each language, or
* Individual pattern files for a language of your choice (e.g., all patterns in JAVA).


