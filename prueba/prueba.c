/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:35:24 by scardell          #+#    #+#             */
/*   Updated: 2024/03/19 09:59:44 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int space(int i)
{
    return (i == ' ' || (i >= 9 && i <= 13));
}

int printable(int i)
{
    return (i >= 33 && i <= 126);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (space(argv[1][i]))
            i++;
        while (printable(argv[1][i]))
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}