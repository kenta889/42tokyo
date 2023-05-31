/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takahashikenta <takahashikenta@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:12:26 by takahashike       #+#    #+#             */
/*   Updated: 2023/05/29 10:56:43 by takahashike      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int    ft_is_separator(char ch, char c)
{
    if (ch == c)
        return (1);
    else
        return (0);
}

void    ft_write_word(char *dest, char *from, char c)
{
    int    i;

    i = 0;
    while (ft_is_separator(from[i], c) == 0)
    {
        dest[i] = from[i];
        i++;
    }
    dest[i] = '\0';
}

void    ft_write_split(char **split, char *str, char c)
{
    int    i;
    int    j;
    int    word;

    word = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (ft_is_separator(str[i], c) == 1)
            i++;
        else
        {
            j = 0;
            while (ft_is_separator(str[i + j], c) == 0)
                j++;
            split[word] = (char *)malloc(sizeof(char) * (j + 1));
            ft_write_word(split[word], str + i, c);
            i += j;
            word++;
        }
    }
}

int    ft_count_words(char *str, char c)
{
    int    i;
    int    words;

    words = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (ft_is_separator(str[i + 1], c) == 1
            && ft_is_separator(str[i], c) == 0)
            words++;
        i++;
    }
    return (words);
}

char    **ft_split(char *str, char c)
{
    char    **res;
    int     words;

    words = ft_count_words(str, c);
    res = (char **)malloc(sizeof(char *) * (words + 1));
    if (res == NULL)
    {
        return (NULL);
        free(res);
    }
    res[words] = 0;
    ft_write_split(res, str, c);
    return (res);
}

int main(void)
{
    char s[] = "_ke_nt_ta_ka_";
    char **res;

    res = ft_split(s, '_');
    printf("%s\n", res[0]);
    printf("%s\n", res[1]);
    printf("%s\n", res[2]);
    // printf("%s\n", res[3]);
    return (0);
}