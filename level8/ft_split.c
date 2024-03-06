/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:56:29 by scardell          #+#    #+#             */
/*   Updated: 2024/03/05 12:44:38 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_isspace(int i)
{
	return (i == ' ' || (i >= 9 && i <= 13));
}

char	**ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **out;

	i = 0;
	k = 0;
	if (!(out = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
		while (ft_isspace(str[i]))
			i++;
		while (str[i])
		{
			j = 0;
		if (!(out[k] = (char *)malloc(sizeof(char) * 4096)))
				return (NULL);
			while (!ft_isspace(str[i]))
			out[k][j++] = str[i++];
			while (ft_isspace(str[i]))
				i++;
			out[k][j] = '\0';
			k++;
		}
		out[k] = NULL;
		return (out);
}

int main()
{
	char *str = "   hola   que tal   estas";
	char **out = ft_split(str);
	int i = 0;
	while (out[i])
	{
		printf("%s\n", out[i]);
		i++;
	}
	return (0);
}
