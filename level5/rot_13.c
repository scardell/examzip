/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:35:44 by scardell          #+#    #+#             */
/*   Updated: 2024/03/01 10:57:32 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
    int i;

    i= 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i]<= 'm' || argv[1][i] >= 'A' && argv[1][i] <= 'M')
                argv[1][i] = argv[1][i] +13;
            else if (argv[1][i] >= 'n' && argv[1][i]<= 'z' || argv[1][i] >= 'N' && argv[1][i] <= 'Z')
                argv[1][i] = argv[1][i] -13;
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
