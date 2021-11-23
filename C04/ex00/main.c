#include <unistd.h>
int ft_strlen(char *str);
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(void)
{
    char s1[17] = "Nousheen ali";
    int i = ft_strlen(s1);
    ft_putchar(i/10 + '0');
	ft_putchar(i%10 + '0');
	return (0);
}
