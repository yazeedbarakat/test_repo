#include <stdio.h>

void    c1(char *str, int arr[4][4])
{
    int i;
    int j;

    i = 0;
    while(i < 2)
    {
        j = i * 8;
        while(j < 8 * i + 8)
        {
            if(str[j] == '1' && i == 0)
            {
                arr[0][j / 2] = 4;
            }
            if(str[j] == '1' && i == 1)
            {
                arr[3][(j - 8) / 2] = 4;
            }
            j += 2;
        }
        i++;
    }
}
int main(void)
{
    char str[] = "1 1 1 1 1 1 1 1 3 1 1 1 1 1 1 1"; 
    int arr[4][4] = {0};            

    c1(str, arr);

    printf("Resulting 4x4 array:\n");
    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 4; c++)
        {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }

    return 0;
}
