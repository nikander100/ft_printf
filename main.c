#include <stdio.h>
#include "hdrs/ft_printf.h"
#include "hdrs/utils.h"
#include <limits.h>

int	main(void)
{
	// int jaja = 10;
	int i = printf("[%s]", "jaja");
	printf ("\n");
	int j = ft_printf("[%s]", "jaja");
	printf("\n");
	printf ("%i, %i", i , j);
	return (0);
}
