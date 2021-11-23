#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
	int i,j;
	i = ft_find_next_prime(6);
	printf("%d\n",i);

	j = ft_find_next_prime(2147483645);
	printf("%d\n", j); 
	return (0);
}
