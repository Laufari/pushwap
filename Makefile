#COLORS#
GREEN = \033[1;92m
RED = \033[1;91m
NC = \033[0m
YELLOW=\033[1;93m



NAME = push_swap

SRCS = push_swap.c validations.c validations_1.c utils.c utils_1.c \
movements_sa.c movements_sb.c r_sort.c sort_2_y_3.c sort_4.c sort_5.c \
sort_stack.c print_stack.c checkers.c smallest_on_top.c

OBJECTS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra -g
RM = rm -rf

%.o: %.c push_swap.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@

all: ${NAME}

${NAME}: ${SRCS}
	@$(CC) $(SRCS) $(CFLAGS) -o $(NAME)
	@echo "$(GREEN)PUSH_SWAP DONE$(END)"

clean:
	@rm -rf $(OBJECTS) 
	@echo "$(RED)OBJECTS DELETED$(END)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)EXEC DELETED $(END)"


re: fclean all
	
.PHONY: all clean fclean re
