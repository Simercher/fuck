#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//char outbuf[1000];
int main(void)
{
    int arr[5][9][4];
    int n;
    scanf("%d", &n);
    for(int i = 3 ; i >= 0; i--)
    {
        arr[i] = n % 10;
        n /= 10;
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 9; j = j + 2)
        {
            for(int k = 0; k < 4; k++)
            {
                if()
            }
        }
    }

    return 0;
}