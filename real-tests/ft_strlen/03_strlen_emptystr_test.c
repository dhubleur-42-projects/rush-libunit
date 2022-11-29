/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlen_emptystr_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:03:02 by bsavinel          #+#    #+#             */
/*   Updated: 2022/01/09 10:34:00 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

int	strlen_emptystr_test(void)
{
	if (ft_strlen("") == 0)
		return (0);
	return (-1);
}
