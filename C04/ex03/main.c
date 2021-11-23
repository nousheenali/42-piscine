#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);
void	ft_putnbr(int nb);

int main(void)
{
    char s[20] = "  -++1234-ab567";
    int i = ft_atoi(s);
	printf("%d\n", i);
	//ft_putnbr(i);
	//printf("\n");
	//printf("%d\n",atoi(s));

    return (0);
}
