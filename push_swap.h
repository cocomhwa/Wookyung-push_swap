/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:57:28 by wooshin           #+#    #+#             */
/*   Updated: 2023/01/19 16:09:18 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "./library/ft_printf/ft_printf.h"
# include "./library/libft/libft.h"

typedef struct s_node
{
	void			*content;
	struct s_list	*next;
	struct s_list	*previous;
}					t_node;

typedef struct s_deque
{
	t_list	*head;
	int		size;
}				t_deque;

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *));
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	print_error(char *error_message);
int		*make_valid_int(int len, char **argv);
int		*input_check(int argc, char **argv);
int		check_duplication(int len, int *int_array);

#endif
