/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takahashikenta <takahashikenta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:01:31 by takahashike       #+#    #+#             */
/*   Updated: 2023/05/26 16:09:52 by takahashike      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;

    i = ft_strlen(s1);
    s1 = (char *)malloc(sizeof(s2) * 10000000000);
    if(s1 == NULL)
        return (0);
    while(s2[j])
    {
        s1[i + j] = s2[j];
        j++;
    }
    return (s1);
}

int main(void)
{
    char str1[] = "kent";
    char str2[] = "taka";

    printf("%s\n", ft_strjoin(str1, str2));
    return (0);
}