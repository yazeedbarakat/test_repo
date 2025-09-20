void    c2(char *str, int arr[4][4])
{
    int j;
    int count_two;

        j = 0;
        count_two = 0;
        while(j < 8)
        {
            if(str[j] == '2' && str[j + 8] == '2' && count_two == 0)
            {
                arr[0][j / 2] = 3;
                arr[1][j / 2] = 4;
                arr[2][j / 2] = 1;
                arr[3][j / 2] = 2;
                count_two++;
            }
            else if(str[j] == '2' && str[j + 8] == '2' && count_two == 1)
            {
                arr[0][j / 2] = 2;
                arr[1][j / 2] = 1;
                arr[2][j / 2] = 4;
                arr[3][j / 2] = 3;
                count_two++;
            }
            j += 2;
        }
}
