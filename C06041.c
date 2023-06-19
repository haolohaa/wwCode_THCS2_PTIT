#include <stdio.h>
#include <string.h>
#include <string.h>

int main()
{
    char c[100005];
    scanf("%s", c);
    char d[100005];
    int k = strlen(c);
    char res = 'a';
    int cnt = 0;
    for(int i = k - 1; i >= 0; i--)
    {
        if(c[i] > res) 
        {
            res = c[i];
            d[cnt++] = res;
        }
        else if(c[i] == res) d[cnt++] = c[i];
    }
    for(int i = cnt - 1; i >= 0; i--)
    {
        printf("%c", d[i]);
    }
}