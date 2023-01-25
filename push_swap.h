/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:57:28 by wooshin           #+#    #+#             */
/*   Updated: 2023/01/25 23:11:21 by wooshin          ###   ########.fr       */
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
	int				content;
	struct s_node	*next;
	struct s_node	*previous;
}					t_node;

t_node	*new_linked_list(int content);
t_node	*lstlast(t_node *lst);
t_node	*lstmap(t_node *lst, void *(*f)(void *), void(*del)(void *));
t_node	*make_stack(int *int_array, int size);
int		lstsize(t_node *lst);
void	lstadd_front(t_node *lst, t_node *new);
void	lstadd_back(int num, t_node *lst);
void	lstdelone(t_node *lst, void (*del)(void *));
void	lstclear(t_node **lst, void (*del)(void *));
void	lstiter(t_node *lst, void (*f)(void *));
void	print_error(char *error_message);
void	free_arrays(char **str_array);
int		*get_int_array(int len, int is_freeable, char **arrays);
int		*is_valid(int argc, int size, int *int_array);
int		check_duplication(int len, int *int_array);
int		get_size(char **str_array);
int		get_int_arr_size(int argc, char **argv);
char	**get_str_array(int argc, char **argv);

#endif
