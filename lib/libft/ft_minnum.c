/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoyette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 14:35:41 by jgoyette          #+#    #+#             */
/*   Updated: 2019/04/30 14:41:31 by jgoyette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_minnum(int num1, int num2)
{
	if (num1 < num2)
		return (num1);
	else
		return (num2);
}