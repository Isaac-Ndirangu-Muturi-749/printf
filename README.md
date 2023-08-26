# Custom Printf Implementation

This is a custom implementation of the `printf` function in C. The `printf` function is widely used for formatted output in C programming, allowing the printing of various data types with specific formatting options. This project aims to replicate some of the basic functionalities of the standard `printf` function.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Supported Conversion Specifiers](#supported-conversion-specifiers)
- [Limitations](#limitations)
- [Build](#build)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

### More Info
Authorized functions and macros
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)
## Introduction

This custom implementation of the `printf` function provides a simplified version of the functionality found in the standard C library's `printf`. It is intended to serve as a starting point for understanding the inner workings of the `printf` function and how it handles conversion specifiers.

## Features

- Supports `%c` conversion specifier for printing characters.
- Supports `%s` conversion specifier for printing strings.
- Supports `%%` conversion specifier for printing a percent sign.
- Supports `%d` conversion specifier for printing a intergers.
- Supports `%%` conversion specifier for printing a intergers.
- Uses the `write` function to output characters to the standard output stream.

## Usage

To use this custom `printf` implementation, include the provided header file `main.h` in your code:

```c
#include "main.h"
```

Call the `_printf` function in your code to format and print text:

```c
int len = _printf("Hello, %s!\n", "world");
```

## Supported Conversion Specifiers

- `%c`: Print a single character.
- `%s`: Print a string.
- `%%`: Print a percent sign.
- `%d`: Print interger
- `%i`: print interger

## Limitations

This custom `printf` implementation has several limitations:

- Does not support the full range of formatting options available in the standard `printf` function.
- Does not handle flag characters, field width, precision, or length modifiers.
- Does not handle all edge cases and data types as comprehensively as the standard `printf` function.

## Build

Compile the code using a C compiler, for example:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o custom_printf
```

## Examples

Check the provided `main.c` file for usage examples and test cases.

## Contributing

Contributions to this project are welcome. If you encounter any issues or have improvements to suggest, feel free to create a pull request or open an issue.

## License

This project is licensed under the [MIT License](LICENSE).

---
## Contributor

Follow me on Twitter 🐦, connect with me on LinkedIn 🔗, and check out my GitHub 🐙. You won't be disappointed!

👉 Twitter: https://twitter.com/NdiranguMuturi1
👉 LinkedIn: https://www.linkedin.com/in/isaac-muturi-3b6b2b237
👉 GitHub: https://github.com/Isaac-Ndirangu-Muturi-749
👉 Instagram: https://www.instagram.com/isaacndirangumuturi/

So, what are you waiting for? Join me on my tech journey and learn something new today! 🚀🌟