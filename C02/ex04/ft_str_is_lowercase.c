/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lovercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atasyure <atasyure@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:21:29 by atasyure          #+#    #+#             */
/*   Updated: 2023/02/12 06:31:46 by atasyure         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if ((str[i] < 'a') || (str[i] > 'z'))
			return (0);
			i++;
	}
	return (1);
}
