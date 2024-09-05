/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:28:38 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/04 12:32:43 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h> 

int	ft_isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
int main(void)
{
    char test_chars[] = {'a', 'z', 'A', 'Z', '1', '!', ' '};
    int i;
    
    for (i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); i++)
    {
        char c = test_chars[i];
        if (ft_isalpha(c))
        {
            printf("'%c' is an alphabetic character.\n", c);
        }
        else
        {
            printf("'%c' is not an alphabetic character.\n", c);
        }
    }
    
    return 0;
}
	
}
*/
