#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void)
{
	int min = 0;
	int max = 17;

	int *arr1 = ft_range(min, max);
	if(arr1 != NULL)
	{
		while(*arr1)
		{
			printf("%d\n", *arr1);
			arr1++;
		}
	}
	return (0);
}
