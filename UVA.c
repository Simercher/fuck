#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char outbuf[1000];
int main(void)
{
    unsigned long long int x, y;
    while(scanf("%llu %llu", &x, &y) != EOF)
    {
        if(y > x)
        {
            printf("%llu\n", y - x);
        }else
        {
            printf("%llu\n", x - y);
        }
    }

    return 0;
}