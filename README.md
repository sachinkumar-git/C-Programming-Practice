# C Programming Practice

This repository contains the C programs I wrote while learning the language. It starts with basic input and output and moves on to operators, conditions, loops, functions, pointers, arrays, strings, structures and file handling.

The programs are kept as I wrote them during practice. Some files contain commented-out code. These are earlier attempts or other ways to solve the same problem, and I kept them for reference.

## Learning Objectives

- Understand the basic structure of a C program
- Work with variables, data types, input and output
- Use operators and write expressions correctly
- Control program flow with `if`, `else`, `switch` and the ternary operator
- Repeat tasks with `for`, `while` and `do-while` loops
- Break problems into functions and use recursion
- Understand pointers, addresses, and call by value vs. call by reference
- Store and process data with arrays and strings
- Group related data with structures and `typedef`
- Read from and write to files

## Topics Covered

| Folder | Topic |
|--------|-------|
| `01-basics` | Hello world, variables, naming rules, `printf`, `scanf`, simple calculations |
| `02-operators` | Arithmetic, relational, logical and assignment operators, type casting, precedence |
| `03-conditional-statements` | `if`, `else if`, nested conditions, ternary operator, `switch`, practice problems |
| `04-loops` | `for`, `while`, `do-while`, increment/decrement, `break`, `continue`, tables, factorial, prime numbers |
| `05-functions-and-recursion` | Function declaration and definition, parameters, return values, recursion, a simple star pattern |
| `06-pointers` | Addresses, dereferencing, pointer to pointer, call by value, call by reference, swapping |
| `07-arrays` | 1D and 2D arrays, pointer arithmetic, passing arrays to functions, reversing an array |
| `08-strings` | Character arrays, `fgets`, `puts`, string length, `string.h` functions, slicing |
| `09-structures` | Structures, arrays of structures, structure pointers, passing structures, `typedef` |
| `10-file-handling` | Opening, reading and writing files, `fgetc`, `fputc`, checking for `EOF` |
| `11-practice-problems` | Number problems: series, digit count, digit sum, reverse, Armstrong, prime, Fibonacci |

Topics with more than one practice set are split into `part-1`, `part-2` and so on. Each part keeps its own numbering, so the files follow the order in which they were written.

## Technologies Used

- C (C99 or later)
- GCC compiler
- Any text editor or IDE (I used VS Code)

## Repository Structure

```text
c-programming-practice/
├── 01-basics/
├── 02-operators/
├── 03-conditional-statements/
│   ├── part-1/
│   └── part-2/
├── 04-loops/
│   ├── part-1/
│   └── part-2/
├── 05-functions-and-recursion/
│   ├── part-1/
│   ├── part-2/
│   └── part-3/
├── 06-pointers/
│   ├── part-1/
│   └── part-2/
├── 07-arrays/
│   ├── part-1/
│   └── part-2/
├── 08-strings/
│   ├── part-1/
│   └── part-2/
├── 09-structures/
├── 10-file-handling/
├── 11-practice-problems/
├── .gitignore
└── README.md
```

## Compiling a Program

You need GCC installed. On Windows you can get it through MinGW-w64 or MSYS2. On Linux, install `gcc` with your package manager. On macOS, install the Xcode command line tools.

Check that GCC is available:

```bash
gcc --version
```

Compile a single file:

```bash
gcc 01-basics/00_hello.c -o hello
```

A few programs use `math.h` (for example `pow` or `sqrt`). On Linux you may need to link the math library with `-lm`:

```bash
gcc 05-functions-and-recursion/part-1/05_square.c -o square -lm
```

## Running a Program

On Windows:

```bash
hello.exe
```

On Linux or macOS:

```bash
./hello
```

The programs in `10-file-handling` read from or write to `Test.txt` in the current folder. Run them from inside that folder:

```bash
cd 10-file-handling
gcc 02_reading.c -o reading
./reading
```

## Example Program

From `04-loops/part-2/10_table.c`, which prints the multiplication table of a number:

```c
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d", &n);

    for (int i =1 ; i<=10 ; i++)
    {
        printf("%d X %d = %d \n", n, i, n*i);
    
    }
    
    return 0;
}
```

Sample run:

```text
Enter the number5
5 X 1 = 5
5 X 2 = 10
...
5 X 10 = 50
```

## Local Learning Resources

I also keep reference material on my machine, such as PDFs, cheat sheets, notes and editor snippets. It is stored in `local-resources/`, which is listed in `.gitignore`, so it is not uploaded to this repository. Compiled files (`.exe`, `.out`, `.o`) and editor settings are ignored as well.

## Note

These are practice programs, not production code. Some of them have small mistakes or unfinished parts that I made while learning. I left them as they are so the repository shows how my learning actually went.
