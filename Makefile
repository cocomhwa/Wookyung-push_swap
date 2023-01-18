# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 19:29:57 by wooshin           #+#    #+#              #
#    Updated: 2023/01/18 21:52:59 by wooshin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

SRCS		= main.c \
			  list_func1.c \
			  list_func2.c \
			  utils.c

PRINTF_PATH	= ./library/ft_printf

OBJS 		= $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(MAKE) -C $(PRINTF_PATH)
	$(CC) $(CFLAGS) \
		-L$(PRINTF_PATH) -lftprintf \
		$(OBJS) -o $(NAME)

%.o : %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)
	$(MAKE) -C $(PRINTF_PATH) clean
fclean : clean
	$(RM) $(NAME)
	$(MAKE) -C $(PRINTF_PATH) fclean
re :
	make fclean
	make all

.PHONY: all fclean clean re
