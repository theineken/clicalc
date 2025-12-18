#!/bin/bash

#install.sh


# Stop on error

set -e

# Compile and install clicalc

gcc -std=c11 -Wall -Wextra -Wpedantic -Werror -O2 main.c -o clicalc
install -d ~/.local/bin
install -m 755 clicalc ~/.local/bin/

# Install man page

install -d ~/.local/share/man/man1
install -m 644 clicalc.1 ~/.local/share/man/man1/
mandb ~/.local/share/man

echo "clicalc installed successfully!"