
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);


int main(void)
{
	char *arr[7];
	arr[0] = "this";
    arr[1] = "is";
    arr[2] = "a";
    arr[3] = "test";
    arr[4] = "string";
    arr[5] = "only";
    printf("%s\n", ft_strjoin(7, arr, "*"));

    return (0);
}
