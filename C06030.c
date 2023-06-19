#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check(char a[][50], int count[], int cnt, char x[])
{
    int ktra = 0;
    for(int i = 0; i < cnt; i++)
    {
        if(strcmp(a[i], x) == 0)
        {
            count[i]++;
            return 0;
        }
    }
    return 1;
}

int main()
{
    char c[50];
    int max = 0;
    char a[50][50];
    int count[100] = {};
    int cnt = 0;
    while(scanf("%s", c) != -1)
    {
        if(check(a, count, cnt, c) == 1)
        {
            strcpy(a[cnt++], c);
            int k = strlen(c);
            if(k > max) max = k;
        }
    }
    for(int i = 0; i < cnt; i++)
    {
        if(strlen(a[i]) == max)
        {
            printf("%s %d %d\n", a[i], max, count[i] + 1);
        }
    }
}