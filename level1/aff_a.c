/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:34:56 by scardell          #+#    #+#             */
/*   Updated: 2024/03/01 09:37:05 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_a(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i++] == c)
		{
			write(1, &c, 1);
			break;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "a", 1);
	else
		aff_a(argv[1], 'a');
	write(1, "\n", 1);
	return (0);
}
//char *s1 = argv[1]
/*Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.
Example:
$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$
*/
