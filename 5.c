#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char outbuf[1000];
int main(void)
{
    int x, y, u, z;
    scanf("%d %d %d %d", &x, &y, &u, &z);
    int A[x][y], B[u][z], AB[x][z];
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 0; i < u; i++)
    {
        for(int j = 0; j < z; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < z; j++)
        {
            AB[i][j] = 0;
        }
    }
    for(int i = 0; i < y; i++)
    {
        for(int j = 0; j < x; j++)
        {
            for(int k = 0; k < z; k++)
            {
                AB[j][k] += A[j][i] * B[i][k];
            }
        }
    }
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < z; j++)
        {
            printf("%4d", AB[i][j]);
        }
        puts("");
    }


    return 0;
}