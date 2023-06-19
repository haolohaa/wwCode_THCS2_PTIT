#include <stdio.h>
struct hocsinh
{
    int ID;
    char name[50];
    char timeBorn[20];
    float p1, p2, p3, sumPoint;

};

void swap(struct hocsinh* a, struct hocsinh* b)
{
    struct hocsinh tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int n;
    scanf("%d\n", &n);
    struct hocsinh HS[n + 5];
    for(int i = 1; i <= n; i++)
    {
        HS[i].ID = i;
        gets(HS[i].name);
        gets(HS[i].timeBorn);
        scanf("%f%f%f\n", &HS[i].p1, &HS[i].p2, &HS[i].p3);
        HS[i].sumPoint = HS[i].p1 + HS[i].p2 + HS[i].p3;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            if(HS[i].sumPoint < HS[j].sumPoint) swap(&HS[i], &HS[j]);
        }
    }
    for(int i = 1; i <= n; i++) 
        printf("%d %s %s %.1f\n", HS[i].ID, HS[i].name, HS[i].timeBorn, HS[i].sumPoint);
}