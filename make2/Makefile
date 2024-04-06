# Define compiler
CC=gcc

# Define any compile-time flags
CFLAGS=-Wall -Wextra -g

# Define the target executable
TARGET=program

# Source directory
SRCDIR = src

# Output directory
BUILDDIR = build

# Find C source files recursively
SOURCES = $(shell find $(SRCDIR) -type f -name '*.c')

# Generate object file names based on source file names
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%.o,$(SOURCES))


.PHONY: all clean

all: $(BUILDDIR)/$(TARGET)

$(BUILDDIR)/$(TARGET): $(OBJECTS)
	$(CC) $^ -o $@

# Compile each source file
$(BUILDDIR)/%.o : $(SRCDIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILDDIR)