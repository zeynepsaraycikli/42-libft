*This project has been created as part of the 42 curriculum by zesarayc.*

# Libft - Your Very First Own Library

## Description

**Libft** is a project at 42 school whose objective is to re-create a set of standard C library functions from scratch, as well as additional utility functions for string and memory manipulation, and linked list management.

Creating this static library (`libft.a`) allows for a deeper understanding of fundamental programming concepts in C:
* Heap memory allocation and deallocation (`malloc`, `free`)
* Pointer arithmetic and memory safety
* String parsing and transformation
* Singly linked list data structures (`t_list`)
* Compilation workflow using `Makefile` and the `ar` archiver

The resulting `libft.a` library can be compiled and reused in subsequent C projects throughout the 42 curriculum.

---

## Instructions

### Compilation

To compile the library, execute the following command in the root of the repository:

```bash
make
```

This compiles all `.c` source files with `cc -Wall -Wextra -Werror` and generates the static library `libft.a`.

### Makefile Rules

The Makefile provides the required standard targets:

* `make` or `make all`: Compiles the library and creates `libft.a`.
* `make clean`: Removes all compiled object files (`.o`).
* `make fclean`: Removes all compiled object files and `libft.a`.
* `make re`: Rebuilds the library from scratch (equivalent to `fclean` followed by `all`).

### Execution and Usage

To use `libft.a` in your C programs:

1. Include `libft.h` in your source files:
   ```c
   #include "libft.h"
   ```
2. Link `libft.a` during compilation:
   ```bash
   cc -Wall -Wextra -Werror main.c -L. -lft -o program
   ```

---

## Detailed Description of the Library

The functions included in the library are detailed below by category:

### Part 1 - Libc Functions

Reimplementations of standard C library functions prefixing their original name with `ft_`:

* **Character Checks & Conversions:**
  * `ft_isalpha`: Checks if a character is alphabetic.
  * `ft_isdigit`: Checks if a character is a digit (`0`-`9`).
  * `ft_isalnum`: Checks if a character is alphanumeric.
  * `ft_isascii`: Checks if a character belongs to the ASCII table.
  * `ft_isprint`: Checks if a character is printable.
  * `ft_toupper`: Converts a character to uppercase.
  * `ft_tolower`: Converts a character to lowercase.

* **String & Memory Functions:**
  * `ft_strlen`: Measures the length of a string.
  * `ft_memset`: Fills a memory area with a constant byte.
  * `ft_bzero`: Erases data in a memory area by writing zeroes (`\0`).
  * `ft_memcpy`: Copies memory area.
  * `ft_memmove`: Copies memory area safely handling overlapping areas.
  * `ft_strlcpy`: Copies a string with size bounds checking.
  * `ft_strlcat`: Concatenates a string with size bounds checking.
  * `ft_strchr`: Locates the first occurrence of a character in a string.
  * `ft_strrchr`: Locates the last occurrence of a character in a string.
  * `ft_strncmp`: Compares two strings up to `n` characters.
  * `ft_memchr`: Searches memory for a character.
  * `ft_memcmp`: Compares two memory blocks.
  * `ft_strnstr`: Locates a substring in a string within a specified length.
  * `ft_atoi`: Converts a string representation of an integer into an `int`.
  * `ft_calloc`: Allocates memory for an array and initializes it to zero.
  * `ft_strdup`: Duplicates a string using heap memory allocation.

### Part 2 - Additional Functions

Utility functions for string allocation, transformation, and file descriptor output:

* `ft_substr`: Extracts a substring from a string.
* `ft_strjoin`: Concatenates two strings into a new dynamically allocated string.
* `ft_strtrim`: Trims specified characters from the beginning and end of a string.
* `ft_split`: Splits a string into an array of strings using a delimiter character.
* `ft_itoa`: Converts an integer into a null-terminated string.
* `ft_strmapi`: Applies a function to each character of a string to create a new string.
* `ft_striteri`: Applies a function to each character of a string in-place.
* `ft_putchar_fd`: Outputs a character to a given file descriptor.
* `ft_putstr_fd`: Outputs a string to a given file descriptor.
* `ft_putendl_fd`: Outputs a string followed by a newline to a given file descriptor.
* `ft_putnbr_fd`: Outputs an integer to a given file descriptor.

### Part 3 - Linked List Functions

Functions for manipulating singly linked lists based on the `t_list` structure defined in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```

* `ft_lstnew`: Allocates and initializes a new list node.
* `ft_lstadd_front`: Adds a node to the beginning of a list.
* `ft_lstsize`: Counts the number of nodes in a list.
* `ft_lstlast`: Returns the last node of a list.
* `ft_lstadd_back`: Adds a node to the end of a list.
* `ft_lstdelone`: Frees the content of a node using a deletion function and frees the node.
* `ft_lstclear`: Deletes and frees a node and all of its successors.
* `ft_lstiter`: Iterates through a list applying a function to each node's content.
* `ft_lstmap`: Iterates through a list, applies a function to create new contents, and creates a new list.

---

## Resources

### Documentation & References

* Linux Programmer's Manual (Man pages for `malloc`, `free`, `write`, `string`).
* [GNU C Library (glibc) Documentation](https://www.gnu.org/software/libc/manual/).
* 42 Libft Subject PDF (`en.subject.pdf`).

### AI Usage Disclosure

In accordance with 42 guidelines on AI usage:

* **Tasks & Scope:** AI tools were used solely for assistance in formatting and structuring this `README.md` file according to the specifications in Chapter V of the subject.
* **Parts of the Project:** AI was not used to write or substitute the core logic of C functions or Makefile implementation, ensuring full understanding of memory allocation and data structure concepts.

Created as part of the **42 curriculum** by **zesarayc**.