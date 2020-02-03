/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 16:56:23 by mroux             #+#    #+#             */
/*   Updated: 2019/08/02 10:06:04 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanum(char c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int to_cap;
	int i;

	to_cap = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_alphanum(str[i]))
			to_cap = 1;
		else
		{
			if (to_cap && str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			to_cap = 0;
		}
		i++;
	}
	return (str);
}
