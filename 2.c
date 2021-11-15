#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char outbuf[1000];
int main(void)
{
    int seed;
    int x, y;
    scanf("%d %d %d", &x, &y, &seed);
    int arr[x][y];
    srand(seed);
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            arr[i][j] = rand() % 42 + 1;
        }
    }
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    printf("----------");
    puts("");
    for(int i = 0; i < y; i++)
    {
        for(int j = 0; j < x; j++)
        {
            printf("%4d", arr[j][i]);
        }
        printf("\n");
    }


    return 0;
}