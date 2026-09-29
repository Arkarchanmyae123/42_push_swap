# --- Variables ---
NAME    = push_swap
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

# --- Files ---
SRCS    = index.c \
          push.c \
          swap.c \
          rotate.c \
          reverserotate.c \
          sort_small.c \
          sort_big.c \
          utils.c

OBJS    = $(SRCS:.c=.o)

# --- Rules ---

# Default target
all: $(NAME)

# Link the object files into the final executable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Compile each .c file into a .o (object) file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Remove object files
clean:
	rm -f $(OBJS)

# Remove object files AND the executable
fclean: clean
	rm -f $(NAME)

# Rebuild everything from scratch
re: fclean all

# Tell Make these aren't real files
.PHONY: all clean fclean re