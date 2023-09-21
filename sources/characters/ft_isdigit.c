/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: faru <faru@student.42.fr>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:36:19 by faru          #+#    #+#                 */
/*   Updated: 2023/09/21 12:55:57 by faru          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
