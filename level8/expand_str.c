/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:26:38 by scardell          #+#    #+#             */
/*   Updated: 2024/03/01 10:08:29 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_expand_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while(str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			write(1, &str[i], 1);
			i++;
		}
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (!(str[i]))
			break ;
		write(1, "   ", 3);
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_expand_str(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
/* 
int	main(int argc, char **argv)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (argc == 0)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
 */