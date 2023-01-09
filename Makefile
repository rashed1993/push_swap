NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror

SOURCES  = main.c \
		   ifempty.c\
		   free_stacks.c \
		   ft_split.c \
		   is_only_numbers.c \
		   is_stack_sorted.c \
		   libft.c \
		   parameters.c \
		   reallocation.c \
		   repeated_numbers.c \
		   seperate_numbers.c \
		   sort_3_numbers.c \
		   sort_5_numbers.c \
		   sort_beyond_3_and_5_numbers.c \
		   stack_size.c \
		   push.c \
		   reverse.c \
		   rotate.c \
		   swap.c \

OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(SOURCES) -Iheaders -o $(NAME)

all: $(NAME)

clean:
	@rm -rf *.o
	@echo "cleaning the .o files"

fclean: clean
	@rm -rf $(NAME)

re: fclean all
