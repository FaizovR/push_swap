#include <wchar.h>
#include "libft.h"

size_t	ft_putwchar(wchar_t chr)
{
	return (ft_putwchar_fd(chr, 1));
}
