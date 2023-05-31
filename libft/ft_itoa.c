/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takahashikenta <takahashikenta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:58:04 by takahashike       #+#    #+#             */
/*   Updated: 2023/05/29 14:26:57 by takahashike      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int ft_putnbr(int nbr)
{
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr *= -1;
    }
    if (nbr >= 10)
        ft_putnbr(nbr / 10);
    return (nbr);
}


char *ft_itoa(int n)
{
    char **result;
    long nbr;
    int c;

    nbr = n;
    result = (char **)malloc(sizeof(char) * )
    if(result == NULL)
    {
        return (NULL);
        free(result);
    }
    c = ft_putnbr(nbr) % 10 + '0';
    write(1, c, 1);
}

int main(void)
{
    int i = 34533;

    printf("%s\n", ft_itoa(i));
}