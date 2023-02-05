/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:57:28 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/05 17:19:40 by wooshin          ###   ########.fr       */
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
	int				num;
	struct s_node	*up;
	struct s_node	*down;
}					t_node;

typedef struct s_stack
{
	t_node	*bottom;
	t_node	*top;
}				t_stack;

t_node	*lstlast(t_node *lst);
t_node	*lstmap(t_node *lst, void *(*f)(void *), void(*del)(void *));
t_stack new_stack(int num);
t_stack make_stack(int *int_array, int size);
int		lstsize(t_node *lst);
void	append(int num, t_stack *stack);
void	lstdelone(t_node *lst, void (*del)(void *));
void	lstclear(t_node **lst, void (*del)(void *));
void	lstiter(t_node *lst, void (*f)(void *));
void	print_error(char *error_message);
void	free_arrays(char **str_array);
void	push_swap(int size, int *int_array);
int		*get_int_array(int len, int is_freeable, char **str_array);
int		*is_valid(int argc, int size, int *int_array);
int		check_duplication(int len, int *int_array);
int		get_size(char **str_array);
char	**get_str_array(int argc, char **argv);

#endif
