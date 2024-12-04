# Push Swap

A sorting algorithm visualizer built in C. The program accepts a list of integers and sorts them using a set of predefined operations.

## Features

- **Sorting Algorithms**: Implements efficient sorting methods optimized for the number of operations.
- **Operations**:
  - `sa`, `sb`, `ss`: Swap the first two elements of a stack.
  - `pa`, `pb`: Push the top element from one stack to another.
  - `ra`, `rb`, `rr`: Rotate a stack upward (top element becomes the bottom).
  - `rra`, `rrb`, `rrr`: Reverse rotate a stack (bottom element becomes the top).
- **Handles Large Inputs**: Can efficiently handle and sort hundreds of integers.

## Requirements

To build and run the project, you need:

- **C Compiler** (e.g., `gcc`)
- A Unix-based system (Linux or macOS).

## Installation and Setup

1. Clone the repository:

   ```bash
   git clone <repository-url>
   cd <repository-directory>
   ```

2. Modify the `Makefile` if needed to match your environment.

## Compilation

To compile the project, run:

```bash
make
```

This will produce an executable named `push_swap`.

## Running the Program

Run the program with a list of integers as input:

```bash
./push_swap <list_of_numbers>
```

### Examples:

```bash
./push_swap 4 67 3 87 23
```

Or provide a string of numbers:

```bash
./push_swap "4 67 3 87 23"
```

The program will output the sequence of operations needed to sort the input.

## Constraints

- The input must consist of integers only.
- No duplicates are allowed.
- Handles both positive and negative numbers.

## Notes

- The program is optimized for minimizing the number of operations.
- It checks for input errors such as:
  - Non-numeric characters.
  - Duplicate numbers.
  - Overflow or underflow of integers.

## License

This project is open-source and available under the MIT License. Contributions are welcome!

---

Enjoy experimenting with sorting algorithms!
