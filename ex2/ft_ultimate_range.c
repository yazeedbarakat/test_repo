#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	s;

	if(min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	s = max - min;
	arr = (int *)malloc(sizeof(int) * s);
	if (arr == NULL)
    	{
        *range = NULL;
        return (-1);
    	}
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (s);
}
