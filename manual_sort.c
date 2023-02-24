/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manual_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooshin <woosin@student.42seoul.kr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:37:19 by wooshin           #+#    #+#             */
/*   Updated: 2023/02/24 17:22:57 by wooshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static void	sort_three_num(t_stack *a)
{
	if (a->top->num == 0)
	{
		s(a);
		r(a);
	}
	else if (a->top->num == 1)
	{
		if(a->top->down->num == 0)
			s(a);
		else
			rr_(a);
	}
	else
	{
		if (a->top->down->num == 1)
			r(a);
		else
		{
			s(a);
			rr_(a);
		}
	}
}

void	sort_five_num(t_stack *a, t_stack *b)
{
	int	i;

	i = a->size;
	while (i > 0)
	{
		if (a->top->num == 0 || a->top->num == 4)
			p(b);
		else
			r(a);
		i--;
	}
	if (b->top->num == 4)
	{
		p(a);
		r(a);
		p(a);
	}
	else if (b->top->num == 0)
	{
		p(a);
		p(a);
		r(a);
	}
}

void	manual_sort(t_stack *a, t_stack *b)
{
	int	size;

	size = a->size;
	if (size == 2)
		r(a);
	else if (size == 3)
		sort_three_num(a);
	else if (size == 5)
		sort_five_num();
	else
		auto_sort(a, b);
}
