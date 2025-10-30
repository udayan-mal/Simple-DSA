# 🚀 Simple DSA - Hacktoberfest 2025

<div align="center">

![Hacktoberfest 2025](https://img.shields.io/badge/Hacktoberfest-2025-blueviolet.svg)
![Contributions Welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg)
![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)
![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)
![First Timers Friendly](https://img.shields.io/badge/first--timers--only-friendly-blue.svg)
![GitHub Stars](https://img.shields.io/github/stars/noodles-sed/Simple-DSA?style=social)
![GitHub Forks](https://img.shields.io/github/forks/noodles-sed/Simple-DSA?style=social)

**A beginner-friendly collection of Data Structures and Algorithms problems**

Perfect for first-time contributors and Hacktoberfest 2025 participants

[Getting Started](#-getting-started) •
[Contributing](#-how-to-contribute) •
[Guidelines](CONTRIBUTING.md) •
[Code of Conduct](CODE_OF_CONDUCT.md) •
[License](LICENSE)

</div>

---

## 📖 About

**Simple DSA** is an open-source repository designed to help developers master fundamental programming concepts through hands-on practice. This project welcomes contributions in **any programming language** and provides a structured pathway for learning Data Structures and Algorithms.

### 🎯 Project Vision

- 📚 Build a comprehensive, multi-language DSA problem collection
- 🌍 Foster an inclusive learning community for developers of all levels
- 🤝 Provide meaningful contribution opportunities for Hacktoberfest
- 🎓 Bridge the gap between theory and practical implementation
- 🏆 Maintain high code quality standards and best practices

### ✨ Why This Repository?

<table>
<tr>
<td align="center">
<img src="https://img.icons8.com/color/96/000000/code.png" width="50"/>
<br><b>Multi-Language</b>
<br>Solve in your preferred language
</td>
<td align="center">
<img src="https://img.icons8.com/color/96/000000/education.png" width="50"/>
<br><b>Educational</b>
<br>Learn by doing
</td>
<td align="center">
<img src="https://img.icons8.com/color/96/000000/community.png" width="50"/>
<br><b>Community Driven</b>
<br>Collaborate and grow
</td>
<td align="center">
<img src="https://img.icons8.com/color/96/000000/medal.png" width="50"/>
<br><b>Recognition</b>
<br>Get credited for contributions
</td>
</tr>
</table>

---

## 📊 Project Statistics

<div align="center">

| 📈 Metric | 🔢 Count |
|-----------|----------|
| **Total Problems** | 115+ |
| **Categories** | 6 |
| **Supported Languages** | Any |
| **Contributors** | [See contributors.json](contributors.json) |

</div>

---

## 🗂️ Problem Categories

Our problems are organized into **6 progressive categories**:

```
📁 Categories
│
├── 🟢 Basic Programming & Arithmetic (Q1-Q9)
│   └── Fundamental operations and syntax
│
├── 🟡 Control Flow & Decision Making (Q10-Q16)
│   └── Conditionals and logical operations
│
├── 🟠 Loops, Functions & Recursion (Q17-Q42)
│   └── Iteration, function design, and recursive thinking
│
├── 🔵 Arrays & Matrices (Q43-Q52)
│   └── Array manipulation and matrix operations
│
├── 🟣 Strings & Structures (Q53-Q62)
│   └── String processing and data structures
│
└── 🔴 Advanced Challenges (Q63+)
    └── LeetCode-style algorithmic problems
```

> **📝 Note:** Complete problem descriptions are available in [PROBLEM_LIST.md](PROBLEM_LIST.md)

---

## 🚀 Getting Started

### Quick Setup

```bash
# 1. Fork and star this repository ⭐

# 2. Clone your fork
git clone https://github.com/YOUR_USERNAME/Simple-DSA.git

# 3. Navigate to the directory
cd Simple-DSA

# 4. Create a new branch
git checkout -b add-solution-qXX-language

# 5. Start coding! 💻
```

### 📋 Prerequisites

- Git installed ([Download](https://git-scm.com/downloads))
- GitHub account ([Sign up](https://github.com/join))
- Code editor (VS Code, IntelliJ, etc.)
- Language compiler/interpreter
- **[Optional]** Hacktoberfest registration ([Register](https://hacktoberfest.com))

---

## 💻 How to Contribute

### Contribution Workflow

```mermaid
graph LR
    A[Pick a Problem] --> B[Create Branch]
    B --> C[Write Solution]
    C --> D[Test Code]
    D --> E[Update contributors.json]
    E --> F[Commit Changes]
    F --> G[Push to Fork]
    G --> H[Create Pull Request]
    H --> I[Code Review]
    I --> J[Merge]
```

### Step-by-Step Guide

<details>
<summary><b>1️⃣ Choose a Problem</b></summary>

- Browse the problem list in [PROBLEM_LIST.md](PROBLEM_LIST.md)
- Check existing solutions to avoid duplicates
- Select a problem that matches your skill level

</details>

<details>
<summary><b>2️⃣ Set Up Your Development Environment</b></summary>

```bash
# Create and switch to a new branch
git checkout -b add-solution-q15-python

# Ensure you're on the latest version
git pull origin main
```

</details>

<details>
<summary><b>3️⃣ Write Your Solution</b></summary>

- Follow the [file structure guidelines](REPOSITORY_STRUCTURE.md)
- Use proper naming conventions: `q[number]_description.ext`
- Add meaningful comments explaining your approach
- Include time and space complexity analysis

**Example Structure:**
```
Language/
└── q15_leap_year.py
```

</details>

<details>
<summary><b>4️⃣ Update contributors.json</b></summary>

Add your information to the `contributors.json` file:

```json
{
  "name": "Your Name",
  "github": "your-username",
  "contributions": ["Q15 - Python"],
  "profile_url": "https://github.com/your-username"
}
```

</details>

<details>
<summary><b>5️⃣ Commit and Push</b></summary>

```bash
# Stage your changes
git add .

# Commit with a meaningful message
git commit -m "feat: Add solution for Q15 in Python"

# Push to your fork
git push origin add-solution-q15-python
```

</details>

<details>
<summary><b>6️⃣ Create a Pull Request</b></summary>

- Go to your fork on GitHub
- Click "Compare & pull request"
- Fill out the PR template completely
- Wait for review and feedback

</details>

> **💡 Pro Tip:** Read our [CONTRIBUTING.md](CONTRIBUTING.md) for detailed guidelines!

---

## 📜 Contribution Guidelines

### ✅ We Accept

- ✔️ Well-tested, working solutions
- ✔️ Solutions in any programming language
- ✔️ Clean, documented code with comments
- ✔️ One solution per pull request
- ✔️ Meaningful variable and function names

### ❌ We Reject

- ✖️ Plagiarized or copied code
- ✖️ Duplicate solutions in the same language
- ✖️ Untested or broken code
- ✖️ PRs without proper documentation
- ✖️ Spam or low-effort contributions

### 📏 Code Standards

All contributions must follow our quality standards:

- **Code Quality**: Clean, readable, and well-structured
- **Documentation**: Include comments and complexity analysis
- **Testing**: Thoroughly tested with multiple test cases
- **Naming**: Follow language-specific conventions
- **Structure**: Adhere to repository organization

See [CONTRIBUTING.md](CONTRIBUTING.md) for complete guidelines.

---

## 🏗️ Repository Structure

```
Simple-DSA/
├── 📄 README.md
├── 📄 LICENSE
├── 📄 CODE_OF_CONDUCT.md
├── 📄 CONTRIBUTING.md
├── 📄 SECURITY.md
├── 📄 REPOSITORY_STRUCTURE.md
├── 📄 CONTRIBUTORS.md
├── 📊 contributors.json
│
├── 📁 .github/
│   ├── ISSUE_TEMPLATE/
│   │   ├── bug_report.md
│   │   ├── feature_request.md
│   │   └── solution_submission.md
│   └── pull_request_template.md
│
├── 📁 C/
├── 📁 C++/
├── 📁 Java/
├── 📁 Python/
├── 📁 javascript/
├── 📁 DSA_problems/
├── 📁 database question/
└── 📁 [Your Language]/
```

See [REPOSITORY_STRUCTURE.md](REPOSITORY_STRUCTURE.md) for detailed organization.

---

## 🤝 Community

### Code of Conduct

We are committed to providing a welcoming and inclusive environment. Please read our [Code of Conduct](CODE_OF_CONDUCT.md) before participating.

### Getting Help

- 📖 Read the [Contributing Guidelines](CONTRIBUTING.md)
- 🐛 Report bugs using [issue templates](.github/ISSUE_TEMPLATE/bug_report.md)
- 💡 Suggest features via [feature requests](.github/ISSUE_TEMPLATE/feature_request.md)
- 💬 Join discussions in the Issues section

### Recognition

All contributors are recognized in:
- 📝 [contributors.json](contributors.json)
- 🏆 Repository contributors page
- 🌟 Special mentions for outstanding contributions

---

## 📊 Progress Tracking

Check your Hacktoberfest progress:

- **Hacktoberfest Dashboard**: [hacktoberfest.com/profile](https://hacktoberfest.com/profile)
- **Valid Contributions**: PRs must be merged or approved
- **Spam Policy**: Low-quality PRs will be marked as invalid

---

## 📄 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

```
MIT License - Copyright (c) 2025 Simple DSA Contributors
```

---

## 🌟 Star History

[![Star History Chart](https://api.star-history.com/svg?repos=noodles-sed/Simple-DSA&type=Date)](https://star-history.com/#noodles-sed/Simple-DSA&Date)

---

## 🙏 Acknowledgments

Special thanks to:

- 🎃 **Hacktoberfest** for promoting open-source contributions
- 👥 **All Contributors** for their valuable solutions
- 🌍 **Open Source Community** for continuous support

---

<div align="center">

### 🚀 Ready to Contribute?

**[Fork this Repository](https://github.com/noodles-sed/Simple-DSA/fork)** | **[Read Contributing Guide](CONTRIBUTING.md)** | **[View Problems](PROBLEM_LIST.md)**

---

### Show Your Support

If you find this project helpful, please consider:

⭐ **Starring** this repository | 🍴 **Forking** for your contributions | 📢 **Sharing** with others

---

**Made with ❤️ by the Simple-DSA Community**
**Initiated By - noodles-sed**

**Happy Coding! 💻✨**

</div>