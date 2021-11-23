#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	int i,j;
	i = ft_is_prime(13);
	printf("%d\n",i);

	j = ft_is_prime(-2147483647);
	printf("%d\n", j); 
	return (0);
}
