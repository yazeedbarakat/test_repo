#include <stdio.h>
char	*ft_strcapitalize(char *str)
{	
	int	i;
	int	c;

	i = 0;
	c = 0;
	while(str[i])
	{
		if (c == 0)
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		if (c > 0)
			if (str[i] >= 65 && str[i] <=90)
				str[i] = str[i] + 32;
		c++;
		if (str[i] < 48 || (str[i] > 57 && str[i] < 65) || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			c = 0;
		i++;
	}
	return (str);
}

int	main()
{
	char	*x;
	char	s[] = "hello, how are you doing? 42WORDS forty-two; fifty+and+one";
	x = ft_strcapitalize(s);
	printf("%s",x);
	return (0);
}
