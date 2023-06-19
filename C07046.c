#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define ll long long
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
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
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        qsort(a, n, 4, cmpfunc);
        ll min = 1e18;
        
        for(int i = 1; i < n; i++)
        {
            int k = abs(a[i] - a[i - 1]);
            if(k < min) min = k;
        }
        ll count = 0;
        int k;
        for(int i = 1; i < n; i++)
        {
            k = abs(a[i] - a[i - 1]);
            if(k == min) count++;
        }
        printf("%lld %lld\n", min, count);
    }
}