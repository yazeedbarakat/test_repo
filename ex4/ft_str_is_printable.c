#include <stdio.h>
int	ft_str_is_printable(char *str)
{	
	int	i;

	i = 0;
	while(str[i])
	{
		if ((str[i] < 32 && str[i] != 0) || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	int	x;
	char	*s = "SAFDA";
	x = ft_str_is_printable(s);
	printf("%d",x);
	return (0);
}
