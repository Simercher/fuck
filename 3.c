#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char outbuf[1000];
int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int f[x], g[y];
    int com; 
    int count = 0;
    for(int i = 0; i < x; i++)
    {
        scanf("%d", &f[i]);
    }
    for(int i = 0; i < y; i++)
    {
        scanf("%d", &g[i]);
    }
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            if(f[i] == g[j])
            {
                for(int k = 0; k < x; k++)
                {
                    if(g[j] == f[k])
                    {
                        f[k] = NULL;
                    }
                }
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}