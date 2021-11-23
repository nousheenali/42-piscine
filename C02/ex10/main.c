#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

void ft_putchar(char c)
{
	write(1, &c, 1);

}

int main(void)
{
	int n = 3;
	char dest[n];
	char src[6]= "world";
	unsigned int i;
   
	i = ft_strlcpy(dest, src, n);

	ft_putchar(i + '0');
}
