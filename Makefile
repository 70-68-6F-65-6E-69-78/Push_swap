NAME = push_swap
BNAME = checker

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =	source/ft_count_words.c source/ft_find_m.c source/ft_is_sorted2.c source/ft_sort_array.c source/ft_stoa.c source/push_swap.c \
		source/ft_cton.c source/ft_free_list.c source/ft_lst_size.c source/ft_split.c source/push_add_back.c source/validate_input.c \
		moves/push.c moves/reverse_rotate.c moves/rotate.c moves/swap.c sort_functions/ft_push_to_stack_b.c \
		sort_functions/ft_push_to_stack_a.c sort_functions/sort_four.c sort_functions/sort_three.c sort_functions/ft_mstt.c \
		sort_functions/sort_five.c sort_functions/sort_small_stack.c sort_functions/sort_two.c \
		
SRCB =	bonus/source_bonus/more_check.c bonus/source_bonus/ft_checker.c \
		bonus/source_bonus/ft_cton.c bonus/source_bonus/ft_free_list.c \
        bonus/source_bonus/ft_lst_size.c bonus/source_bonus/ft_split.c bonus/source_bonus/push_add_back.c \
        bonus/source_bonus/ft_count_words.c bonus/source_bonus/ft_sort_array.c bonus/source_bonus/convert_to_num.c\
		bonus/moves_bonus/push.c bonus/moves_bonus/reverse_rotate.c bonus/moves_bonus/rotate.c bonus/moves_bonus/swap.c \
		bonus/get_next_line/get_next_line.c bonus/get_next_line/get_next_line_utils.c

OBJ = ${SRCS:.c=.o}
BOBJ = ${SRCB:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BNAME)

$(BNAME): $(BOBJ)
	$(CC) $(CFLAGS) -o $(BNAME) $(BOBJ)

clean:
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME) $(BNAME)

re:	fclean all

.SECONDARY: $(OBJ) $(OBJB)

.PHONY : all  clean fclean re
