#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int min = 1e9;
    char c[100][100];
    for(int i = 0; i < n; i++) scanf("%s", c[i]); 
    char d[100];
    strcpy(d, c[0]);
    strcat(d, c[0]);
    int res = 1;
    int index[n + 5];
    for(int i = 0; i < n; i++)
    {
        if(strstr(d, c[i]) == NULL)
        {
            res = -1;
            break;
        }
        char* p = strstr(d, c[i]);
        index[i] = strlen(d) - strlen(p);
    }
    if(res)
    {
        for(int i = 0; i < n; i++)
        {
            int step = 0;
            for(int j = 0; j < n; j++)
            {
                step += (index[j] <= index[i]) ? (index[i] - index[j]) : (strlen(c[i]) + index[i] - index[j]);
            }
            if(step < min) min = step;
        }
    }
    if(res == -1) printf("-1");
    else printf("%d", min);
}