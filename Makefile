SRCS = aid/ft_atoi.c aid/ft_garbage_collector.c aid/ft_memcpy.c aid/ft_putstr_fd.c aid/ft_split.c aid/ft_strdup.c aid/ft_strlen.c aid/ft_strncmp.c linked_list_tools/ft_lst_del_first.c linked_list_tools/ft_lst_del_in.c linked_list_tools/ft_lst_del_last.c linked_list_tools/ft_lstadd_back.c linked_list_tools/ft_lstadd_front.c linked_list_tools/ft_lstlast.c linked_list_tools/ft_lstnew.c linked_list_tools/ft_lstsize.c main.c rules/ft_pa.c rules/ft_pb.c rules/ft_ra.c rules/ft_rb.c rules/ft_rr.c rules/ft_rra.c rules/ft_rrb.c rules/ft_rrr.c rules/ft_rules.c rules/ft_sa.c rules/ft_sb.c rules/ft_ss.c linked_list_tools/ft_insadd_back.c linked_list_tools/ft_insnew.c sieve/ft_print_instructions.c sieve/ft_sieve.c sieve/ft_sieve_utils.c utils/ft_check_input.c utils/ft_is_number.c utils/ft_pa_all.c utils/ft_pa_big.c utils/ft_pb_min.c utils/ft_push_top.c utils/ft_is_sorted.c
SRCSB = bonus/checker_bonus.c aid/ft_atoi.c aid/ft_garbage_collector.c aid/ft_memcpy.c aid/ft_putstr_fd.c aid/ft_split.c aid/ft_strdup.c aid/ft_strlen.c aid/ft_strncmp.c linked_list_tools/ft_lst_del_first.c linked_list_tools/ft_lst_del_in.c linked_list_tools/ft_lst_del_last.c linked_list_tools/ft_lstadd_back.c linked_list_tools/ft_lstadd_front.c linked_list_tools/ft_lstlast.c linked_list_tools/ft_lstnew.c linked_list_tools/ft_lstsize.c rules/ft_pa.c rules/ft_pb.c rules/ft_ra.c rules/ft_rb.c rules/ft_rr.c rules/ft_rra.c rules/ft_rrb.c rules/ft_rrr.c rules/ft_rules.c rules/ft_sa.c rules/ft_sb.c rules/ft_ss.c linked_list_tools/ft_insadd_back.c linked_list_tools/ft_insnew.c utils/ft_check_input.c utils/ft_is_number.c utils/ft_is_sorted.c gnl/get_next_line_bonus.c gnl/get_next_line_utils_bonus.c
OBJS = ${SRCS:.c=.o}
OBJSB = ${SRCSB:.c=.o}

NAME = push_swap
NAME_BONUS = checker

%.o: %.c header.h
		cc -Wall -Wextra -Werror -c $< -o $@

all: ${NAME}

${NAME}: $(OBJS)
		cc $^ -o $@

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(OBJSB)
		cc $^ -o $@

clean:
		rm -f $(OBJS) $(OBJSB)

fclean: clean
		rm -f $(NAME) $(NAME_BONUS)

re: fclean all
