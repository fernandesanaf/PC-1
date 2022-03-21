#include <stdio.h>

int main()
{
    int num = 1;
    while (num <= 10)
    {
        printf(" %d\t %d0\t %d00\t %d000\t \n", num, num, num);
        num++;
    }
    return 0;
}
