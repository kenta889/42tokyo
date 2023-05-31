/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takahashikenta <takahashikenta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 13:47:42 by takahashike       #+#    #+#             */
/*   Updated: 2023/05/30 15:55:20 by takahashike      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t ft_strnlen(const char *s, size_t len)
{
    size_t i = 0;

    while(*s || i <= len)
        i++;
    return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *tmp;
    size_t i = 0;

    tmp = (char *)malloc(sizeof(char) * len);
    if(tmp == NULL)
        return (NULL);
    if(start >= (unsigned int)ft_strnlen(s, len) || len == 0)
        return (0);
    while(start <= len)
    {
        if(i > (size_t)ft_strnlen(s, len))
            return (tmp);
        tmp[i] = s[start];
        i++;
        start++;
    }
    return (tmp);
}

int main(void)
{
    char *str;

    str = "kenttaka";
    printf("%s\n", ft_substr(str, 0, 10));
    return (0);
}