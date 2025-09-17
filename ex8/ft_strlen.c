#include <stdio.h>
int	ft_strlen(char *str)
{	
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int	main()
{
	int	x;
	char	s[] = "df5A7grg";
	x = ft_strlen(s);
	printf("%d",x);
	return (0);
}
