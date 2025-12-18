# clicalc (C)

**clicalc** is a simple Unix-style command-line calculator that performs
basic arithmetic operations on floating-point numbers.

It is designed as a small, well-behaved CLI utility with proper input
validation, error handling, and documentation.

## Build

gcc -std=c11 -Wall -Wextra -Wpedantic -Werror -g -O0 main.c -o clicalc

## Install

./install.sh

## Usage

```bash
clicalc <number1> <operator> <number2>
```

## Examples 

```bash
clicalc 3.5 + 2
```
```bash
clicalc 5 '*' 5
```

## Notes

Created by Tim Heineken

https://github.com/theineken