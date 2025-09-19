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


void    r1(char *str, int arr[4][4])
{
    int i;
    int j;

    i = 2;
    while(i < 4)
    {
        j = i * 8;
        while(j < 8 * i + 8)
        {
            if(str[j] == '1' && i == 2)
            {
                arr[(j - 16) / 2][0] = 4;
            }
            if(str[j] == '1' && i == 3)
            {
                arr[(j - 24) / 2][3] = 4;
            }
            j += 2;
        }
        i++;
    }
}


void    r4(char *str, int arr[4][4])
{
    int i;
    int j;

    i = 2;
    while(i < 4)
    {
        j = i * 8;
        while(j < 8 * i + 8)
        {
            if(str[j] == '4' && i == 2)
            {
                arr[(j - 16) / 2][0] = 1;
                arr[(j - 16) / 2][1] = 2;
                arr[(j - 16) / 2][2] = 3;
                arr[(j - 16) / 2][3] = 4;
            }
            if(str[j] == '4' && i == 3)
            {
                arr[(j - 24) / 2][0] = 4;
                arr[(j - 24) / 2][1] = 3;
                arr[(j - 24) / 2][2] = 2;
                arr[(j - 24) / 2][3] = 1;
            }
            j += 2;
        }
        i++;
    }
}

void fill_grid(char *str, int arr[4][4])
{
    c1(str, arr);
    c4(str, arr);
    r1(str, arr);
    r4(str, arr);
}


int main(void)
{
    char str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"; 
    int arr[4][4] = {0};            

    fill_grid(str, arr);

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
