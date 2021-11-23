
#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int min = 11;
    int max = 25;
    int k= 0;
    int *arr1;

    int **arr = &arr1;
    int l = ft_ultimate_range(arr, min, max);
    if (l > 0)
	{
		while(*(*arr+k))
			{
        		printf("%d\n", *(*arr+k));
       			 k++;
    		}
	}
    return (0);
}
