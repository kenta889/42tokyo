/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takahashikenta <takahashikenta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:32:58 by takahashike       #+#    #+#             */
/*   Updated: 2023/05/29 10:50:49 by takahashike      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    char *dest;
    int i = 0;

    // i = ft_strlen(s1);
    while(s1[i])
        i++;
    dest = (char *)malloc(sizeof(s1) * i + 1);
    i = 0;
    if(dest == NULL)
    {
        return (NULL);
        free(dest);
    }
    while(s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char *src;
    char *dest;
    
    src = "kenttaka";
    dest = ft_strdup(src);
    printf("src : %s &src: %p\n", src, &src);
    printf("dest : %s &dest: %p\n", dest, &dest);
    return (0);
}