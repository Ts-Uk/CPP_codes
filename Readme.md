# C++ Codes: Learning and Competitive Programming Journey

This repository is my learning log for C++ and my path into competitive programming. Everything I learn goes here: concept practice, pattern problems, data structures, algorithms, and solutions from online judges. I update it regularly, so the commit history shows my progress.

## Goals

- Build a strong foundation in C++ and problem solving
- Learn data structures and algorithms step by step
- Practice consistently on online judges and in contests
- Keep clean, commented code that I can revisit and learn from

## Roadmap

**Fundamentals**
- [x] Input and output (`cin`, `cout`)
- [x] Operators and arithmetic
- [x] Type casting (explicit)
- [ ] Implicit type conversion
- [x] Constants and `#define`
- [x] Conditional statements (`if`/`else`, `switch`)
- [x] Loops (`for`, `while`)
- [ ] `break` and `continue`
- [x] Nested loops and pattern printing

**Core concepts**
- [ ] Functions
- [ ] Arrays and 2D arrays
- [ ] Strings
- [ ] Pointers and references
- [ ] Recursion
- [ ] Structs and OOP basics

**Competitive programming toolkit**
- [ ] STL: `vector`, `pair`, `map`, `set`, `stack`, `queue`, `priority_queue`
- [ ] Sorting and searching (binary search)
- [ ] Prefix sums and two pointers
- [ ] Number theory (prime checking, sieve, GCD/LCM, modular arithmetic)
- [ ] Greedy algorithms
- [ ] Dynamic programming
- [ ] Graphs (BFS, DFS, shortest paths)
- [ ] Bit manipulation

Mark a topic done by changing `[ ]` to `[x]`.

## Project Structure

```
CPP_codes/
├── code.cpp                      # Hello world, sizeof, and basic input/output
├── conditional_statement/        # if/else, switch, calculator, largest of 3
├── loops/                        # for, while, digit sum, prime check (in progress)
├── operator/                     # arithmetic, type casting, constants
├── patterns/                     # star and number patterns using nested loops
├── templates/
│   └── template.cpp              # Competitive programming starter template
└── problems/                     # Online judge solutions (added as I solve them)
    ├── codeforces/
    ├── cses/
    ├── atcoder/
    ├── beecrowd/
    └── leetcode/
```

New topic folders (such as `functions/`, `arrays/`, `strings/`, `recursion/`, `stl/`) are added as I reach them in the roadmap.

## Getting Started

### Prerequisites

A C++ compiler such as [GCC (g++)](https://gcc.gnu.org/), Clang, or MSVC.

### Clone the repository

```bash
git clone https://github.com/Ts-Uk/CPP_codes.git
cd CPP_codes
```

### Compile and run

```bash
g++ -std=c++17 code.cpp -o code
./code
```

On Windows, run `code.exe` instead of `./code`. To run any other program, point `g++` at its file:

```bash
g++ -std=c++17 patterns/star_star_star.cpp -o star
./star
```

## Competitive Programming Workflow

1. Copy `templates/template.cpp` into the right `problems/<platform>/` folder.
2. Name the file after the problem, for example `problems/codeforces/4A_watermelon.cpp`.
3. Add a comment at the top with the problem link and the main idea.
4. Solve it, test with sample input, then commit.

Example header:

```cpp
// Problem: Watermelon
// Link: https://codeforces.com/problemset/problem/4/A
// Idea: Weight must be even and greater than 2.
```

## Problem Solving Log

| Date | Platform | Problem | Topic | Status |
|------|----------|---------|-------|--------|
|      |          |         |       |        |

Add a row for each problem you solve.

## Notes

- Most programs read input from the keyboard, so type the values and press Enter after running.
- Compiled `.exe` files are ignored by Git through `.gitignore`.
- Some early files include comments in Bangla and English that I wrote as study notes.
- Files marked "in progress" are placeholders for upcoming practice.

## Contributing

This is a personal learning repository, but suggestions and improvements are welcome. Feel free to open an issue or a pull request.
