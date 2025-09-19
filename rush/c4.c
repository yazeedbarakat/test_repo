#include <stdio.h>

void    c4(char *str, int arr[4][4])
{
    int i;
    int j;

    i = 0;
    while(i < 2)
    {
        j = i * 8;
        while(j < 8 * i + 8)
        {
            if(str[j] == '4' && i == 0)
            {
                arr[0][j / 2] = 1;
                arr[1][j / 2] = 2;
                arr[2][j / 2] = 3;
                arr[3][j / 2] = 4;
            }
            if(str[j] == '4' && i == 1)
            {
                arr[0][(j - 8) / 2] = 4;
                arr[1][(j - 8) / 2] = 3;
                arr[2][(j - 8) / 2] = 2;
                arr[3][(j - 8) / 2] = 1;
            }
            j += 2;
        }
        i++;
    }
}
int main(void)
{
    char str[] = "4 3 2 1 4 2 2 2 4 3 2 1 1 2 2 2";
    int arr[4][4] = {0};

    c4(str, arr);

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

