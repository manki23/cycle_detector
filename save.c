/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 15:20:12 by manki             #+#    #+#             */
/*   Updated: 2018/05/14 16:29:15 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"
#include <stdio.h>

int		cycle_detector(const t_list *list)
{
	const t_list		**p;
	int					i;
	int					j;

	p = (const t_list **)malloc(sizeof(const t_list *) * 42000);
	p[0] = list;
	i = 0;
	while (list)
	{
		list = list->next;
		p[++i] = list;
		j = i;
		while (--j >= 0)
		{
			if (p[j] == p[i])
			{
				free(p);
				return (1);
			}
		}
	}
	free(p);
	return (0);
}

int		main(void)
{
	t_list		a;
	t_list		b;
	t_list		c;
	t_list		d;

	a.data = 1;
	b.data = 2;
	c.data = 3;
	d.data = 4;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	d.next = &c;

	if (cycle_detector(&a))
		printf("OK\n");
	else
		printf("NOT OK\n");
	return (0);
}
