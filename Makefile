SRCS = aid/ft_atoi.c aid/ft_garbage_collector.c aid/ft_memcpy.c aid/ft_putstr_fd.c aid/ft_split.c aid/ft_strdup.c aid/ft_strlen.c aid/ft_strncmp.c ft_pa_all.c ft_pa_big.c ft_pb_min.c ft_push_top.c linked_list_tools/ft_lst_del_first.c linked_list_tools/ft_lst_del_in.c linked_list_tools/ft_lst_del_last.c linked_list_tools/ft_lstadd_back.c linked_list_tools/ft_lstadd_front.c linked_list_tools/ft_lstlast.c linked_list_tools/ft_lstnew.c linked_list_tools/ft_lstsize.c main.c rules/ft_pa.c rules/ft_pb.c rules/ft_ra.c rules/ft_rb.c rules/ft_rr.c rules/ft_rra.c rules/ft_rrb.c rules/ft_rrr.c rules/ft_rules.c rules/ft_sa.c rules/ft_sb.c rules/ft_ss.c sieve/ft_insadd_back.c sieve/ft_insnew.c sieve/ft_print_instructions.c sieve/ft_sieve.c utils/ft_check_input.c utils/ft_is_number.c
OBJS = ${SRCS:.c=.o}

NAME = push_swap

.%o: .%c header.h
	cc $^ -o $@

all: ${NAME}

${NAME}: $(OBJS)
	cc $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
