#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	output;

	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(fd, "-2147483648", 11);
			return ;
		}
		else
		{
			n *= -1;
			write(fd, "-", 1);
		}
	}
	if (n < 10 && n >= 0)
	{
		output = n + 48;
		write(fd, &output, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
