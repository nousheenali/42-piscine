void	ft_putnbr_base(int nbr, char *base);

int main(void)
{
	ft_putnbr_base(19,"01");
	ft_putnbr_base(3999,"0123456789ABCDEF");
	ft_putnbr_base(3999,"0123456789");
	ft_putnbr_base(3999,"poneyvif");
	ft_putnbr_base(3999,"01234566");
}
