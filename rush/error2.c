#include <unistd.h>

int    error1(char *str)
{
                if((str[0] == '1' && str[16] != '1') || (str[16] == '1' && str[0] != '1'))
                    write(1, "1\n", 2);
                if((str[6] == '1' && str[24] != '1') || (str[24] == '1' && str[6] != '1'))
                    write(1, "2\n", 2);
                if((str[8] == '1' && str[22] != '1') || (str[22] == '1' && str[8] != '1'))
                    write(1, "3\n", 2);
                if((str[14] == '1' && str[30] != '1') || (str[30] == '1' && str[14] != '1'))
                    write(1, "4\n", 2);
        return (0);
}

int main() {
    char *n = "1 4 4 1 1 2 2 1 1 3 3 1 1 5 5 1";
    error1(n);

    return 0;
}
