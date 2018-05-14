/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 15:33:46 by manki             #+#    #+#             */
/*   Updated: 2018/05/14 15:39:41 by manki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct     s_list
{
	int            data;
	struct s_list  *next;
}                  t_list;

int        cycle_detector(const t_list *list);

#endif
