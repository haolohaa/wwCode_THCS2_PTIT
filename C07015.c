#include <stdio.h>

struct sinhvien
{
    int msv;
    char name[50];
    char ngaysinh[15];
    float p1, p2, p3;
    float sump;
};

int main()
{
    int n;
    scanf("%d\n", &n);
    struct sinhvien SV[n + 5];
    for(int i = 1; i <= n; i++)
    {
        SV[i].msv = i;
        gets(SV[i].name);
        gets(SV[i].ngaysinh);
        scanf("%f%f%f\n", &SV[i].p1, &SV[i].p2, &SV[i].p3);
        SV[i].sump = SV[i].p1 + SV[i].p2 + SV[i].p3;
    }
    float max = 0;
    for(int i = 1; i <= n; i++)
    {
        if(SV[i].sump > max) max = SV[i].sump;
    }
    for(int i = 1; i <= n; i++)
    {
		if(SV[i].sump == max)
        {
            printf("%d %s %s %g\n", SV[i].msv, SV[i].name, SV[i].ngaysinh, SV[i].sump);
        }
    }
}