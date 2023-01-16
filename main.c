#include "libft.h"

int	main(void)
{
	int d = -99528;
	char *s = ft_itoa(d);
	printf("%s", s);

	return (0);
}

//leaks --atExit -- ./a.out