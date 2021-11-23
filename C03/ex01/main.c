#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

void ft_putchar(char c)
{
	write(1, &c, 1);

}
int main(void)
{
    unsigned int n = 3;
	char s1[6] = "hello";
    char s2[6] = "hellb";
    int i = ft_strncmp(s1, s2, n);
    printf("%i\n", i);

	int j = strncmp(s1, s2, 3);
	printf("%i\n", j);

}
