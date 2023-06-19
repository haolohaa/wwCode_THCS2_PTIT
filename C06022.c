#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int t;
    scanf("%d\n", &t);
    for(int u = 1; u <= t; u++)
    {
        printf("Test %d: ", u);
        char c[205];
        gets(c);
        //puts(c);
        char d[50];
        gets(d);
        char e[50];
        strcpy(e, d);
        int k = strlen(d);
        for(int i = 0; i < k; i++) e[i] = tolower(e[i]);

        char* p = strtok(c, " ");
        while(p != NULL)
        {
            char f[50];
            strcpy(f, p);
            int l = strlen(f);
            for(int i = 0; i < l; i++) f[i] = tolower(f[i]);
            if(k != l) printf("%s ", p);
            else
            {
                int check = 1;
                for(int i = 0; i < k; i++)
                {
                    if(e[i] != f[i])
                    {
                        check = 0;
                        break;
                    }
                }
                if(check == 0) printf("%s ", p);
            }
            p = strtok(NULL, " ");
        }
        printf("\n");
    }
}