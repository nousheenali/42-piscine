#include <unistd.h>

char	*ft_strcapitalize(char *str);

void ft_putchar(char c)
{
    write(1, &c, 1);

}

int main(void)
{
    char str[61] = "salut, comment tu vas ? 42mots quarante-deux; cinQuante+et+un";
    char *ptr = ft_strcapitalize(str);

    while (*ptr != '\0')
    {
        ft_putchar(*ptr);
        ptr++;
    }
}
