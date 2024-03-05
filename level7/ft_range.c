/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scardell <scardell@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:54:19 by scardell          #+#    #+#             */
/*   Updated: 2024/03/01 15:57:12 by scardell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int        *ft_range(int start, int end)
{
        long        i;
        long len;

        if (end > start)
                len = (long)end - (long)start + 1;
        if (start> end)
                len = (long)start - (long)end + 1;

        int *numbers;
        i = 0;
        numbers = (int *)malloc(sizeof(int) * len);
        if (!numbers)
                return (NULL);

        while (i < len)
        {
                if (start <= end)
                        numbers[i++] = start++;
                else
                        numbers[i++] = start--;
        }
        return (numbers);
}

// #include <stdio.h>

// int        main(void)
// {
//         // int start = -2;
//         // int end = 2;
//         int start = -2147483648;
//         int end = 2147483647;
//         int *prueba = ft_range(start, end);
//         int i = 0;
//         while (i < 4)
//                 printf("%d |", prueba[i++]);
//         return (0);
// }