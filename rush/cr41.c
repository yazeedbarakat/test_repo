#include <stdio.h>

void c1(char *str, int arr[4][4]);
void c4(char *str, int arr[4][4]);
void r1(char *str, int arr[4][4]);
void r4(char *str, int arr[4][4]);

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
