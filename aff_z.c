/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:56:31 by scardell          #+#    #+#             */
/*   Updated: 2024/02/28 15:52:34 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_z(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			write(1, &c, 1);
			break;
		}
		i++;
		if (str[i] == '\0')
		{
			write(1, &c, 1);
			break;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc != 2 )
		write(1, "z", 1);
	else
		aff_z(argv[1], 'z');
	write(1, "\n", 1);
	return (0);
}
/* int	main(void)
{
	write(1, "z", 1);
	write(1, "\n", 1);
	return (0);
} */
/* Write a program that takes a string, and displays the first 'z'
character it encounters in it, followed by a newline. If there are no
'z' characters in the string, the program writes 'z' followed
by a newline. If the number of parameters is not 1, the program displays
'z' followed by a newline.
Example:
$> ./aff_z "abc" | cat -e
z$
$> ./aff_z "dubO a POIL" | cat -e
z$
$> ./aff_z "zaz sent le poney" | cat -e
z$
$> ./aff_z | cat -e
z$
*/
