#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int T;
    scanf("%d\n", &T);
    char s[1005];
    while(T--)
    {
        gets(s);
        const char* delim = " ";
        char* p;
        char tmp[1005][1005];
        int k = strlen(s);
        
        p = strtok(s, delim);
        int cnt = 0;
        while(p != NULL)
        {
            strcpy(tmp[cnt], p);
            cnt++;
            p = strtok(NULL, delim);
        }
        for(int i = 0; i < cnt; i++)
        {
            tmp[i][0] = toupper(tmp[i][0]);
        }
        for(int i = 1; i < cnt; i++)
        {
            int q = strlen(tmp[i]);
            for(int j = 1; j < q; j++) tmp[i][j] = tolower(tmp[i][j]);
        }
        int ppp = strlen(tmp[0]);
        for(int i = 0; i < ppp; i++) tmp[0][i] = toupper(tmp[0][i]);
        for(int i = 1; i < cnt; i++)
        {
            if(i == 1) printf("%s", tmp[i]);
            else printf(" %s", tmp[i]);
        }
        printf(", %s", tmp[0]);
        printf("\n");
    }
}