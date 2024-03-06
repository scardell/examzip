/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:33:39 by scardell          #+#    #+#             */
/*   Updated: 2024/03/01 15:43:31 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char *str, char c, int end)
{
	int i;

	i = 0;
	while (str[i] && i < end)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return  (0);
}

int main(int argc, char **argv)
{	
	int i = 0;
	int j = 0;
		
	if (argc == 3)
	{
		while(argv[1][i])
		{
			if (!check(argv[1], argv[1][i], i)
				write(1, &argv[1][i], 1);
				i++;
		}
		while(argv[2][j])
		{
			if (!check (argv[1], argv[2][j], i) && !scheck(argv[2], argv[2]][j], j))
				write(1, &argv[2][j], 1);
				j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
