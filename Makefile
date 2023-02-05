# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 19:29:57 by wooshin           #+#    #+#              #
#    Updated: 2023/02/05 18:03:19 by wooshin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= cc
CFLAGS		= -g -Wall -Wextra -Werror
RM			= rm -f

SRCS		= main.c \
			  utils.c \
			  utils2.c \
			  push_swap.c \
			  list_func1.c \
			  input_check.c
#			  list_func2.c \

LIBFT_PATH	= ./library/libft
PRINTF_PATH	= ./library/ft_printf

OBJS 		= $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(MAKE) -C $(LIBFT_PATH) bonus
	$(MAKE) -C $(PRINTF_PATH)
	$(CC) $(CFLAGS) \
		-L$(LIBFT_PATH) -lft -L$(PRINTF_PATH) -lftprintf \
		$(OBJS) -o $(NAME)

%.o : %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	$(MAKE) -C $(PRINTF_PATH) clean
	$(MAKE) -C $(LIBFT_PATH) clean
fclean : clean
	$(RM) $(NAME)
	$(MAKE) -C $(PRINTF_PATH) fclean
	$(MAKE) -C $(LIBFT_PATH) clean
re :
	make fclean
	make all

.PHONY: all fclean clean re
