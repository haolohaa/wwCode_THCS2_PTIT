#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[105];
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
            int q = strlen(tmp[i]);
            for(int j = 0; j < q; j++) 
            {
                tmp[i][j] = tolower(tmp[i][j]);
            }
        }
        for(int i = 0; i < cnt - 1; i++)
        {
            printf("%c", tmp[i][0]);
        }
        printf("%s@ptit.edu.vn", tmp[cnt - 1]);
}