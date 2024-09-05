/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:02:14 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/04 14:02:21 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) b;
	while (len > 0)
	{
		*tmp = (unsigned char) c;
		tmp++;
		len--;
	}
	return (b);
}

/*
int main(void)
{
    char buffer[20];  // Create a buffer with 20 bytes

    // Initialize the buffer with some values
    for (int i = 0; i < 20; i++) {
        buffer[i] = 'A';  // Fill buffer with 'A'
    }

    // Print buffer before memset
    printf("Buffer before ft_memset: ");
    for (int i = 0; i < 20; i++) {
        printf("%c", buffer[i]);
    }
    printf("\n");

    // Use ft_memset to set the first 10 bytes to 'X'
    ft_memset(buffer, 'X', 10);

    // Print buffer after memset
    printf("Buffer after ft_memset: ");
    for (int i = 0; i < 20; i++) {
        printf("%c", buffer[i]);
    }
    printf("\n");

    return 0;

}
*/
