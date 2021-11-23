#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	int n = 3;
	char dest[n];
	char src[6]= "world";
	char *p = ft_strncpy(dest, src, n);

	int i;
	i = 0;
	while(i < n)
	{
		write(1, p, 1);
		i++;
		p++;
	}
}
