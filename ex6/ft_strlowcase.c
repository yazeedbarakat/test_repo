#include <stdio.h>
char	*ft_strupcase(char *str)
{	
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	main()
{
	char	*x;
	char	s[] = "df5A7grg";
	x = ft_strupcase(s);
	printf("%s",x);
	return (0);
}
