#include "libft.h"

void	ft_putwstr_fd(wchar_t const *str, int fd)
{
	while (*str)
		ft_putwchar_fd(*str++, fd);
}
