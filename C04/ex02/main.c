#include <unistd.h>
int ft_putnbr(int nb);

int main(void)
{
    int nb = 2147483648;
    ft_putnbr(nb);
    return (0);
}
