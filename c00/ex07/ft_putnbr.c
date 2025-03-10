#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	else if (nb <= 9)
	{
		ft_putchar(nb % 10 + '0');
	}
	ft_putnbr(nb);
}

int	main()
{
	ft_putnbr(-1234);
	return 0;
}
