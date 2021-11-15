#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char outbuf[1000];
int main(void)
{
    int seed;
    int arr[6];
    scanf("%d", &seed);
    srand(seed);
    for(int i = 0; i < 6; i++)
    {
        arr[i] = rand() % 6 + 1;
    }
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6 - i - 1; j++)
        {
            if(arr[j] >= arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    printf("%d", arr[0]);
    for(int i = 1; i < 6; i++)
    {
        printf("%4d", arr[i]);
    }
    printf("\n");


    return 0;
}