#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	x;
	
	i = 0;
	while(str[i])
	{
		if ((str[i] < 65 && str[i] != 0) || str[i] > 122 || (str[i] > 90 && str[i] < 97))
			return (0);
		i++;
	}
	return (1);
}
int	main()
{
	int x;
	char *str = "";

	x = ft_str_is_alpha(str);
	printf("%d",x);
	return 0;
}
