#include <unistd.h>
void	ft_putchar(char c)
{
	write(1,&c,1);
}
int	ft_str_is_numeric(char *str);

int main(void)
{
	char str[10] = "134256ia37";
	int i = ft_str_is_numeric(str);
	ft_putchar(i+'0');
	return (0);
}
