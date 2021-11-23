#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);
int main(void)
{
	char str[11] = "abcdefghij";
	char *n = ft_strdup(str);
	printf("%s",n);
	free(n);
	return (0);

}
