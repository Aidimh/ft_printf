# ft_printf
A custom implementation of the standard C library printf function from the 42 Network (1337) curriculum. Developed using variadic arguments to mimic libc behavior, handling diverse format specifiers, data conversions, and memory safety without external dependencies. Built to serve as a core sub-module for future projects.


# ft_printf — Custom Variadic I/O Function implementation

An essential systems programming project from the **1337 / 42 Network** curriculum. The core objective of this project is to re-code the standard C library `printf` function, mastering the handling of **variadic arguments** in C and optimizing string formatting algorithms.

This repository yields a robust and reusable static library (`libftprintf.a`) that can be integrated into any low-level systems project to handle flexible, formatted outputs.

---

## 🛠️ Key Architectural Focus Areas

* **Variadic Functions:** Utilized the `<stdarg.h>` macros (`va_start`, `va_arg`, `va_copy`, `va_end`) to securely process an unknown number of input arguments of varying data types.
* **Format Parsing Engine:** Built a single-pass tokenization loop that identifies specifier flags immediately following the `%` character and dispatches them to specialized sub-routines.
* **Base Conversions:** Implemented low-level mathematical conversions to print integers in hexadecimal format (both uppercase and lowercase) and handle address pointers.
* **Return-Value Management:** Carefully tracked and calculated the total byte count written to the standard output (`stdout`), mimicking the exact behavior and error states of standard `printf`.

---

## 📂 Supported Format Specifiers

The function accurately handles the following standard formats:


| Specifier | Data Type | Description |
| :---: | :--- | :--- |
| `%c` | `char` | Prints a single character. |
| `%s` | `char *` | Prints a string of characters (handles `NULL` string pointers safely). |
| `%p` | `void *` | Prints a memory address pointer in hexadecimal format, prefixed with `0x`. |
| `%d` | `int` | Prints a base 10 signed decimal integer. |
| `%i` | `int` | Prints a base 10 signed integer. |
| `%u` | `unsigned int` | Prints an unsigned base 10 decimal number. |
| `%x` | `unsigned int` | Prints a number in base 16 hexadecimal format using lowercase characters. |
| `%X` | `unsigned int` | Prints a number in base 16 hexadecimal format using uppercase characters. |
| `%%` | None | Prints a literal percent sign character. |

---

## 🚀 Compilation & Integration

The repository contains a structured `Makefile` that compiles the codebase into a static library archive safely without relinking.

### Build Commands:
```bash
# Compile and create the libftprintf.a static library
make

# Remove temporary object files (.o)
make clean

# Remove object files and the final compiled .a file
make fclean

# Perform a clean re-build from scratch
make re
```

### Technical Integration Example:
To leverage this custom formatting engine in your own source files, simply include the header:

```c
#include "ft_printf.h"

int main(void)
{
    char *user = "Mohammed";
    int count;

    // Call the custom variadic printf function
    count = ft_printf("Hello, %s! Hex pointer: %p\n", user, &user);
    
    ft_printf("Bytes printed by ft_printf: %d\n", count);
    return (0);
}
```

Compile alongside the static library file:
```bash
gcc -Wall -Wextra -Werror main.c -L. -lftprintf -o print_test
```
