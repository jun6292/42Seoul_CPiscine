#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	a;
	char	b;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			a = '-';
			write(1, &a, 1);
			nb *= -1;
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			nb %= 10;
		}
		if (nb < 10)
		{
			b = nb + '0';
			write(1, &b, 1);
		}
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
