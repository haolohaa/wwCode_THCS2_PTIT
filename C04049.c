#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int bcnn(int a, int b)
{
    int s = a * b;
    while(a * b != 0)
    {
        if(a > b) a %= b;
        else b %= a;
    }
    return s / (a + b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a[n + 5];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("%d ", a[0]);
        for(int i = 1; i < n; i++)
        {
            printf("%d ", bcnn(a[i], a[i - 1]));
        }
        printf("%d\n", a[n - 1]);
    }   
}