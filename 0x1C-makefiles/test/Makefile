# Compiler to be used
CC = gcc

# .c files
SRC = main.c school.c

# .o files (derived from .c files)
OBJ = $(SRC:.c=.o)

# Name of the executable
NAME = school

# Default rule
all: $(NAME)

# Build the executable
$(NAME): $(OBJ)
	@echo "gcc $^ -o $@"
	@$(CC) $^ -o $@

# Rule to compile main.c
main.o: main.c
	@echo "gcc -c -o $@ $<"
	@$(CC) -c -o $@ $<

# Rule to compile school.c
school.o: school.c
	@echo "gcc -c -o $@ $<"
	@$(CC) -c -o $@ $<

# Clean rule to remove the executable and object files
clean:
	@echo "Cleaning..."
	@rm -f $(NAME) $(OBJ)

