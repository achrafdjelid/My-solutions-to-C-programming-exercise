# C Programming Exercises: University Series

This repository contains my solutions to the C programming exercise series
(TD) given in my university course at [NIT].

## 💡 How to use this repository

Try to solve each exercise **on your own first**. Read the statement, write
your own code, and only then compare it with my solution. You learn much more
this way than by just reading the answer.

> These are my personal solutions. There may be other ways to solve each
> exercise, and feedback is welcome.

---

## Exercises

### Exercise 1: Multiples of 7
Write a program that reads a minimum value and a maximum value, then:
- prints all the multiples of 7 between them (inclusive),
- prints how many multiples were found,
- prints a message if there are none.

👉 Solution: [`exo01.c`](exo01.c)

### Exercise 2: Positive and negative numbers
Write a program that reads numbers from the user until the user enters `0`.
At the end, print how many numbers were positive and how many were negative.

👉 Solution: [`exo02.c`](exo02.c)

### Exercise 3: Perfect number
Write a program that reads an integer and tells whether it is a perfect number
(a number equal to the sum of its divisors, excluding itself).
Example: 6 = 1 + 2 + 3.

👉 Solution: [`exo03.c`](exo03.c)

### Exercise 4: Maximum and its position
Write a program that reads 20 numbers, then prints the largest one and the
position at which it was entered.

👉 Solution: [`exo04.c`](exo04.c)

### Exercise 5: Sum and product
Write a program that keeps reading numbers and computes their sum and product.
Stop as soon as the sum reaches 300 or the product reaches 1000, then print
the sum and the product.

👉 Solution: [`exo05.c`](exo05.c)

### Exercise 7: Pattern
Write a program that prints the following pattern, using a different
character on each line:

```
####
$$$
**
&
```

👉 Solution: [`exo07.c`](exo07.c)

---

## How to compile and run

You need a C compiler such as GCC.

```
gcc exo01.c -o exo01
./exo01          # on Windows: exo01.exe
```

## What I practiced

- `printf` / `scanf`
- `if / else`
- `for`, `while`, `do...while` loops
- Counters, accumulators, and finding a maximum

## Author

Achref Djelid
