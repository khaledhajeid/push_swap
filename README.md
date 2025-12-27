*This project has been created as part of the 42 curriculum by kal-haj-*

# Push_swap

## Description
Push_swap is a project from the 42 curriculum that focuses on sorting data on a stack with a limited set of operations. The goal is to sort integers efficiently using the least number of operations possible.  

The project challenges the student to manipulate two stacks (`stack_a` and `stack_b`) with operations such as:

- `sa` / `sb` – swap the first two elements of stack a or b  
- `ss` – sa and sb at the same time  
- `pa` / `pb` – push the top element from one stack to the other  
- `ra` / `rb` – rotate stack up  
- `rr` – ra and rb at the same time  
- `rra` / `rrb` – reverse rotate stack down  
- `rrr` – rra and rrb at the same time  

The project includes:

- Parsing and validating input numbers  
- Handling errors (duplicates, non-integer inputs, overflows)  
- Implementing stack operations  
- Optimizing the number of operations for different input sizes  

---

## Instructions

### Compilation
Use `cc` for compilation and :

```bash
cc -Wall -Wextra -Werror *.c -o push_swap
```

or with `Makefile`:

```bash
make
```

### Execution
Run the program by passing integers as arguments:

```bash
./push_swap 3 2 1 4 5
```

This will output a series of operations that will sort the stack.  

To check correctness with the `checker` program:

```bash
./push_swap 3 2 1 4 5 | ./checker 3 2 1 4 5
```
or

```bash
ARG="3 2 1 4 5" ./push_swap $ARG | ./checker_linux $ARG
```

---

## Resources
- 42 push_swap subject: [push_swap PDF](https://cdn.intra.42.fr/pdf/pdf/189075/en.subject.pdf)   
- Tutorials on sorting algorithms:
  - Radix sort
- AI Assistance:
  - AI was used as an educational tool to help understand specific concepts or complex parts of the project sort optimization, and validation functions.  

---

## Optional: Test Cases
You can test your program using the following examples:

```bash
./push_swap 1
./push_swap 2 1
./push_swap 3 2 1
./push_swap 1 2 3 4 5
./push_swap 5 4 3 2 1
./push_swap -1 3 -5 7 0
```
Use `checker` to verify correctness:

```bash
./push_swap 5 4 3 2 1 | ./checker 5 4 3 2 1
```
