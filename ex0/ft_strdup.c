#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	char	*arr;
	int	j;

	i = 0;
	while (src[i])
		i++;
	arr = (char *)malloc(i + 1);
	j = 0;
	while (src[i])
	{
		arr[j] = src[j];
		j++;
	}
	return (arr);
}
