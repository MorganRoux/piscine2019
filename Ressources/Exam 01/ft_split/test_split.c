/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 19:57:45 by exam              #+#    #+#             */
/*   Updated: 2019/08/09 19:59:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char *str);
int main(void)
{
	char *str = "ceci est une chaine";
	char **strs;
	int i = 0;


	strs = ft_split(str);
	while (strs[i] != 0)
		printf("%s\n", strs[i++]);

	return (0);
}
