/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:51:08 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/05 16:51:10 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	if (!src && !dst)
	{
		return ('\0');
	}
	while (n > 0)
	{
		*tmp_dst++ = *tmp_src++;
		n--;
	}
	return (dst);
}
/*
int main(void)
{
    char src[] = "Hello, World!";
    char dst[20]; // Ensure dst has enough space for the copied data

    // Initialize dst with some data
    strcpy(dst, "Placeholder");
    printf("Before ft_memcpy:\n");
    printf("dst: '%s'\n", dst);

    // Use ft_memcpy to copy data from src to dst
    ft_memcpy(dst, src, strlen(src) + 1); // +1 to include the null terminator

    // Print the result
    printf("After ft_memcpy:\n");
    printf("dst: '%s'\n", dst);

    return 0;
}
*/
