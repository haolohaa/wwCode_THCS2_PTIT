#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int check(char c[])
{
    int count = 0;
    int n = strlen(c);
    for(int i = 0; i < n/2; i++)
    {
        if(c[i] != c[n - 1 - i]) count++;
        if(count > 1) return 0; 
    }
    if(count == 1) return 1;
    else 
    {
        if(n % 2 == 1) return 1;
        return 0;
    }
}
int main()
{
    int t;
    scanf("%d\n", &t);
    while(t--)
    {
        char c[25];
        scanf("%s", c);
        if(check(c)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}