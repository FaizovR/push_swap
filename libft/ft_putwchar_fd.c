#include <wchar.h>
#include "libft.h"

size_t		ft_putwchar_fd(wchar_t chr, int fd)
{
	size_t counter;

	counter = 0;
	if (chr <= 0x7F)
		counter += ft_putchar_fd(chr, fd);
	else if (chr <= 0x7FF)
	{
		counter += ft_putchar_fd((chr >> 6) + 0xC0, fd);
		counter += ft_putchar_fd((chr & 0x3F) + 0x80, fd);
	}
	else if (chr <= 0xFFFF)
	{
		counter += ft_putchar_fd((chr >> 12) + 0xE0, fd);
		counter += ft_putchar_fd(((chr >> 6) & 0x3F) + 0x80, fd);
		counter += ft_putchar_fd((chr & 0x3F) + 0x80, fd);
	}
	else if (chr <= 0x10FFFF)
	{
		counter += ft_putchar_fd((chr >> 18) + 0xF0, fd);
		counter += ft_putchar_fd(((chr >> 12) & 0x3F) + 0x80, fd);
		counter += ft_putchar_fd(((chr >> 6) & 0x3F) + 0x80, fd);
		counter += ft_putchar_fd((chr & 0x3F) + 0x80, fd);
	}
	return (counter);
}
