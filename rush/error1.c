#include <unistd.h>

int    error1(char *str)
{
        int     i;
        int     j;
        int     count_four;
        int     count_one;

        i = 0;
        while(i < 4)
        {
                j = 8 * i ;
                count_four = 0;
                count_one = 0;
                while(j < 8 * i + 8)
                {
                        if(str[j] == '4')
                                count_four++;
                        if(str[j] == '1')
                                count_one++;
                        if(count_four == 2 || count_one == 2)
                        {
                                write(1, "error input aint valid", 22);
                                return(0);
                        }
                        j++;
                        j++;
                }
                i++;
        }
}

int main() {
    char *n = "4 3 2 1 1 2 2 2 4 4 2 1 1 2 2 2";
    error1(n);

    return 0;
}
