#include <unistd.h>
void	ft_putchar(char c)
{
	write(1,&c,1);
}
int	ft_str_is_lowercase(char *str);

int main(void)
{
	char str[10] = "absgvc";
	int i = ft_str_is_lowercase(str);
	ft_putchar(i+'0');
	return (0);
}
