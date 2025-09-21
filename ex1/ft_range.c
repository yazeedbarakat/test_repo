#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	s;

	i = 0;
	if(min >= max)
		return (NULL);
	s = max - min;
	min++;
	arr = (int *)malloc(sizeof(int) * s);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
