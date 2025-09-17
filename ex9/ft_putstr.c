#include <unistd.h>

void	ft_putstr(char *str)
{	
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	write(1, str, i);
}

int	main()
{
	char	s[] = "df5A7grg";
	ft_putstr(s);
	return (0);
}
