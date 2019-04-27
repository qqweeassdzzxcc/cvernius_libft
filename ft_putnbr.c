#include "libft.h"

static int	ft_count_digits(int n)
{
	int count;

	count = (n == 0) ? 1 : 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static int	ft_del(int count)
{
	int d;

	d = 1;
	while (count > 1)
	{
		d *= 10;
		count--;
	}
	return (d);
}

void	ft_putnbr(int n)
{
	int del;
	int count_dit;
	int res;

	count_dit = ft_count_digits(n);
	if (n < 0)
		ft_putchar('-');
	while (count_dit > 0)
	{
		del = ft_del(count_dit);
		res = (n < 0) ? (-1 * (n / del)) : (n / del);
		ft_putchar(res + 48);
		n = n % del;
		count_dit--;
	}
}
