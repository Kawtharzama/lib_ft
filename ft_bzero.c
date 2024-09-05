/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:40:17 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/05 16:40:18 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h> 
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n > 0)
	{
		*tmp = '\0';
		tmp++;
		n--;
	}
}
/*
int main(void)
{
    char buffer[20];
    
    // Initialize the buffer with some data
    strcpy(buffer, "Hello, World!");
    printf("Before ft_bzero: '%s'\n", buffer);
    
    // Use ft_bzero to zero out the first 5 bytes of the buffer
    ft_bzero(buffer, 5);
    
    // Print the result
    printf("After ft_bzero: '%s'\n", buffer);
    
    return 0;
}
*/
