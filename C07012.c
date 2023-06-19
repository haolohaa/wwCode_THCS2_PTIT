#include <stdio.h>

struct hang
{
    int ma_hang;
    char c[50];
    char nhom_hang[50];
    float giaBan;
    float giaMua;
    float loiNhuan;
};

void swap(struct hang* a, struct hang* b)
{
    struct hang tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int n;
    scanf("%d\n", &n);
    struct hang Hang[n + 5];
    for(int i = 1; i <= n; i++)
    {
        Hang[i].ma_hang = i;
        gets(Hang[i].c);
        gets(Hang[i].nhom_hang);
        scanf("%f%f\n", &Hang[i].giaMua, &Hang[i].giaBan);
        Hang[i].loiNhuan = Hang[i].giaBan - Hang[i].giaMua;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            if(Hang[i].loiNhuan < Hang[j].loiNhuan) swap(&Hang[i], &Hang[j]);
        }
    }
    for(int i = 1; i <= n; i++)
    {
        printf("%d %s %s %.2f\n", Hang[i].ma_hang, Hang[i].c, Hang[i].nhom_hang, Hang[i].loiNhuan);
    }
}