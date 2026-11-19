# PPS Assignments

C programs for **Programming for Problem Solving (PPS)**, written as part of
B.Tech Electronics and Communication Engineering (ECE),
MIT World Peace University (MIT-WPU), Pune.

## Contents

| No. | File | Description |
| 1 | `ECE-PPS-ASSIGNMENT-1.c` | Prints "Hello World" on the screen |
| 2 | `ECE-PPS-ASSIGNMENT-2.c` | Reads five integers and prints their sum and average |
| 3 | `ECE-PPS-ASSIGNMENT-3.c` | Menu-driven calculator (addition, subtraction, multiplication, division) using switch-case |
| 4 | `ECE-PPS-ASSIGNMENT-4.c` | Adds two 3x3 matrices using 2D arrays |
| 5 | `ECE-PPS-ASSIGNMENT-5.c` | Menu-driven string operations (length, copy, concatenate, compare, reverse, lowercase, uppercase) |
| 6 | `ECE-PPS-ASSIGNMENT-6.c` | Factorial of a number using both iteration and recursion |
| 7 | `ECE-PPS-ASSIGNMENT-7.c` | Student record system using structures: total and percentage of 3 subjects |
| 8 | `ECE-PPS-ASSIGNMENT-8.c` | Swaps two numbers using pointers (call by reference) |
| 9 | `ECE-PPS-ASSIGNMENT-9.c` | Copies the contents of one file into another using file handling |
| 10 | `ECE-PPS-ASSIGNMENT-10.c` | Prints the full calendar of a given year, including leap year handling |

## Topics Covered
- Input and output, operators
- Switch-case and loops
- Arrays (1D and 2D) and strings
- Functions and recursion
- Structures
- Pointers
- File handling

## How to Run

1. Download or clone this repository.
2. Open a terminal in the folder.
3. Compile the program you want, for example Assignment 8:

       gcc ECE-PPS-ASSIGNMENT-8.c -o assignment8

4. Run it:

       ./assignment8

   On Windows, run `assignment8.exe` instead.

Note: Assignment 5 uses `strrev`, `strlwr` and `strupr`, which are not part of
standard C. It works in Turbo C / Code::Blocks (Windows) but may not compile
with gcc on Linux or macOS.

## Sample Output (Assignment 8)

    Enter first number: 5
    Enter second number: 10

    Before swapping: x = 5, y = 10
    After swapping: x = 10, y = 5

## Author
**Sanjana**
B.Tech ECE, MIT World Peace University, Pune
