/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:08:37 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/05 17:08:38 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <string.h> 

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

	i = 0;
	if (!dst && !src)
		return ('\0');
	tmp_dst = (char *) dst;
	tmp_src = (char *) src;
	if (tmp_dst > tmp_src)
		while (len -- > 0)
			tmp_dst[len] = tmp_src[len];
	else
	{
		while (i++ < len)
			tmp_dst[i] = tmp_src[i];
	}
	return (dst);
}
/*

int main(void)
{
    char buffer[20] = "Hello, World!";
    
    // Move part of the string within the same buffer
    ft_memmove(buffer+3, buffer, 15); // Move "Hello, World!" to overlap itself

    printf("Result: '%s'\n", buffer); // Should print "Hello, Hello, World!"
    
    return 0;
}
*/
