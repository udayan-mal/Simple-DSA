# Repository Structure Guide

This document provides a comprehensive overview of the Simple DSA repository structure and organization.

## 📁 Complete Directory Structure

```
Simple-DSA/
│
├── README.md                          # Main repository documentation
├── LICENSE                            # MIT License file
├── CODE_OF_CONDUCT.md                # Community guidelines
├── CONTRIBUTING.md                    # Contribution guidelines
├── SECURITY.md                        # Security policy
├── REPOSITORY_STRUCTURE.md           # This file - structure documentation
├── CONTRIBUTORS.md                    # Contributors list (display format)
├── contributors.json                  # Contributors data (JSON format)
│
├── .github/                          # GitHub specific files
│   ├── ISSUE_TEMPLATE/              # Issue templates
│   │   ├── bug_report.md           # Template for bug reports
│   │   ├── feature_request.md      # Template for feature requests
│   │   └── solution_submission.md  # Template for solution submissions
│   │
│   ├── pull_request_template.md     # PR template
│   │
│   └── workflows/                   # GitHub Actions (optional)
│       └── greetings.yml           # Welcome message for new contributors
│
├── C/                               # C language solutions
│   ├── q1_hello_world.c
│   ├── q2_print_integer.c
│   ├── q3_add_two_integers.c
│   └── ...
│
├── C++/                             # C++ language solutions
│   ├── q1_hello_world.cpp
│   ├── q2_print_integer.cpp
│   ├── q3_add_two_integers.cpp
│   └── ...
│
├── Java/                            # Java language solutions
│   ├── Q1HelloWorld.java
│   ├── Q2PrintInteger.java
│   ├── Q3AddTwoIntegers.java
│   └── ...
│
├── Python/                          # Python language solutions
│   ├── q1_hello_world.py
│   ├── q2_print_integer.py
│   ├── q3_add_two_integers.py
│   └── ...
│
├── javascript/                      # JavaScript solutions
│   ├── q1_hello_world.js
│   ├── q2_print_integer.js
│   └── ...
│
├── DSA_problems/                    # Additional DSA problem resources
│   └── ...
│
├── database question/               # Database-related questions
│   └── ...
│
├── .idea/                          # IDE configuration files (gitignored)
├── .vscode/                        # VS Code configuration files (gitignored)
│
└── [Other Languages]/               # Additional languages as contributed
    └── ...
```

## 📝 File Naming Conventions

### General Rules
- All filenames should be descriptive and follow consistent patterns
- Use lowercase with underscores for separation (snake_case) except where language conventions differ
- Always prefix with question number: `q[NUMBER]_`

### Language-Specific Conventions

#### C and C++
```
Pattern: q[number]_descriptive_name.c or .cpp
Examples:
  - q1_hello_world.c
  - q15_leap_year.cpp
  - q42_multiply_matrices.c
```

#### Python
```
Pattern: q[number]_descriptive_name.py
Examples:
  - q1_hello_world.py
  - q15_leap_year.py
  - q42_multiply_matrices.py
```

#### Java
```
Pattern: Q[Number]DescriptiveName.java (PascalCase for class names)
Examples:
  - Q1HelloWorld.java
  - Q15LeapYear.java
  - Q42MultiplyMatrices.java
```

#### JavaScript
```
Pattern: q[number]_descriptive_name.js
Note: The repository uses lowercase 'javascript' folder
Examples:
  - q1_hello_world.js
  - q15_leap_year.js
  - q42_multiply_matrices.js
```

#### Other Languages
Follow the language's standard naming conventions while maintaining the `q[number]_` prefix.

## 📋 File Structure Standards

### Solution File Header
Each solution file should include a header comment with:

```
// Question [Number]: [Problem Title]
// Author: [Your Name/GitHub Username]
// Date: [Submission Date]
// Language: [Programming Language]
// Description: [Brief description of the problem]
// Time Complexity: [If applicable]
// Space Complexity: [If applicable]
```

### Example Header in Different Languages

**C/C++:**
```c
/*
 * Question 15: Check Leap Year
 * Author: JohnDoe (@johndoe)
 * Date: October 29, 2025
 * Language: C
 * Description: Program to check if a given year is a leap year
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */
```

**Python:**
```python
"""
Question 15: Check Leap Year
Author: JohnDoe (@johndoe)
Date: October 29, 2025
Language: Python
Description: Program to check if a given year is a leap year
Time Complexity: O(1)
Space Complexity: O(1)
"""
```

**Java:**
```java
/*
 * Question 15: Check Leap Year
 * Author: JohnDoe (@johndoe)
 * Date: October 29, 2025
 * Language: Java
 * Description: Program to check if a given year is a leap year
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */
```

## 🗂️ Organization by Category

Solutions are organized by programming language, but they correspond to categories in the README:

### Category Mapping
1. **Basic Programming (Q1-Q9)**: Fundamental programs
2. **Control Flow (Q10-Q16)**: Conditionals and decision making
3. **Loops & Functions (Q17-Q42)**: Iteration and recursion
4. **Arrays & Matrices (Q43-Q52)**: Array operations
5. **Strings & Structures (Q53-Q62)**: String manipulation and data structures
6. **Advanced (Q63+)**: LeetCode-style problems

## 📊 contributors.json Structure

The `contributors.json` file maintains a record of all contributors:

```json
{
  "contributors": [
    {
      "name": "Full Name",
      "github": "username",
      "contributions": [
        "Q1 - Python",
        "Q15 - C++"
      ],
      "about": "Brief description",
      "profile_url": "https://github.com/username"
    }
  ],
  "stats": {
    "total_contributors": 1,
    "total_solutions": 2,
    "languages": ["Python", "C++"]
  }
}
```

## 🔧 Adding New Language Support

To add support for a new programming language:

1. **Create Language Directory**
   ```bash
   mkdir [LanguageName]/
   ```
   **Note:** Check existing folder naming (e.g., `javascript` is lowercase in this repo)

2. **Follow Naming Convention**
   - Check the repository's existing pattern
   - Examples in this repo: `C/`, `C++/`, `Java/`, `Python/`, `javascript/`
   - Maintain consistency with existing folders

3. **Add README (Optional)**
   - Create a `README.md` in the language folder
   - Include setup instructions
   - List language-specific considerations

4. **Document in Main README**
   - Add the language to the supported languages list
   - Update any relevant sections

## 📖 Documentation Files

### Root Level Documentation

| File | Purpose |
|------|---------|
| `README.md` | Main repository documentation, problem list, contribution guide |
| `CODE_OF_CONDUCT.md` | Community behavior guidelines |
| `CONTRIBUTING.md` | Detailed contribution instructions |
| `LICENSE` | MIT License terms |
| `SECURITY.md` | Security policy and vulnerability reporting |
| `REPOSITORY_STRUCTURE.md` | This file - structure documentation |
| `CONTRIBUTORS.md` | Display-friendly contributors list |
| `contributors.json` | Contributor tracking and stats (JSON format) |

### Special Folders

| Folder | Purpose |
|--------|---------|
| `DSA_problems/` | Additional DSA problem resources and documentation |
| `database question/` | Database-related problems and solutions |
| `.idea/` | JetBrains IDE configuration (should be in .gitignore) |
| `.vscode/` | VS Code configuration (should be in .gitignore) |

### .github Directory

| File | Purpose |
|------|---------|
| `ISSUE_TEMPLATE/bug_report.md` | Bug report template |
| `ISSUE_TEMPLATE/feature_request.md` | Feature request template |
| `ISSUE_TEMPLATE/solution_submission.md` | Solution submission issue template |
| `pull_request_template.md` | Pull request template |
| `workflows/` | GitHub Actions workflows (optional) |

## 🎯 Best Practices

### File Organization
- One solution per file
- Group solutions by language
- Keep consistent naming across languages
- Include proper documentation in each file

### Code Quality
- Add meaningful comments
- Use descriptive variable names
- Follow language-specific style guides
- Include complexity analysis when relevant

### Documentation
- Keep README.md updated
- Document any new features or changes
- Update contributors.json with each contribution
- Maintain consistency across all documentation

## 🚀 Quick Reference

### Adding a New Solution
1. Navigate to appropriate language folder: `cd [Language]/`
2. Create file with proper naming: `q[number]_name.ext`
3. Add header comment with details
4. Write solution with comments
5. Update `contributors.json`
6. Submit PR using the template

### Creating New Language Folder
1. Create directory: `mkdir [Language]/`
2. Check existing naming convention (e.g., `javascript/` is lowercase)
3. Add first solution following naming convention
4. Update main README if needed
5. Submit PR mentioning new language support

### Updating Documentation
1. Edit the relevant .md file
2. Ensure consistency with other docs
3. Preview changes locally
4. Submit PR with clear description

## 📞 Questions?

If you have questions about the repository structure:
- Check existing issues for similar questions
- Refer to `CONTRIBUTING.md` for contribution guidelines
- Create a new issue using the appropriate template
- Contact maintainers through GitHub discussions

---

**Last Updated**: October 29, 2025

This structure guide is maintained by the Simple DSA community. Suggestions for improvements are always welcome!