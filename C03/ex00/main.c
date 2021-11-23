#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

void ft_putchar(char c)
{
	write(1, &c, 1);

}
int main(void)
{
    char s1[6] = "hello";
    char s2[12] = "hello";
    int i = ft_strcmp(s1, s2);
    printf("%i\n",i);

	int j = strcmp(s1, s2);
	printf("%i\n",j);

}
