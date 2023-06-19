#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkThuanNghich(char c[])
{
    int k = strlen(c);
    for(int i = 0; i < k/2; i++)
    {
        if(c[i] != c[k - 1 - i]) return 0;
    }
    return 1;
}

int checkTrungNhau(char a[][50], int count[], int cnt, char x[])
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
    char a[100][50];
    int count[100] = {};
    int cnt = 0;
    int max = 0;
    while(scanf("%s", c) != -1)
    {
        if(checkThuanNghich(c) == 1)
        {
            if(checkTrungNhau(a, count, cnt, c) == 1)
            {
                strcpy(a[cnt], c);
                cnt++;
                int k = strlen(c);
                if(k > max) max = k;
            }
        }
    }
    for(int i = 0; i < cnt; i++)
    {
        if(strlen(a[i]) == max) printf("%s %d\n", a[i], count[i] + 1);
    }
}