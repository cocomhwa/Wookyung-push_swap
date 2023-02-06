/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <wooshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:57:28 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/07 02:11:07 by wooshin          ###   ########.fr       */
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
	char	name;
}				t_stack;

t_stack	new_stack(void);
t_stack make_stack(int *int_array, int size);
t_stack	make_stack_a(int argc, char **argv);
t_stack	make_stack_b(void);
void	add_top(int num, t_stack *stack);
void	print_error(char *error_message);
void	print_stack(t_stack a, t_stack b);
void	free_arrays(char **str_array);
void	push_swap(t_stack a, t_stack b);
void	*nullguard(void *content);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	r(t_stack *stack);
void	rr(t_stack *a, t_stack *b);
void	rr_(t_stack *stack);
void	rrr(t_stack *a, t_stack *b);
void	swap(t_stack *stack);
void	s(t_stack *stack);
void	push(t_stack *src, t_stack *dest);
void	p(t_stack *src, t_stack *dest);
int		*get_int_array(int len, int is_freeable, char **str_array);
int		*is_valid(int argc, int size, int *int_array);
int		check_duplication(int len, int *int_array);
int		get_size(char **str_array);
char	**get_str_array(int argc, char **argv);

#endif
