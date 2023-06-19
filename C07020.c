#include <stdio.h>

struct pokemon
{
    char name[50];
    int x, y;
    int res;
};

int solve(struct pokemon p)
{
    int count = 0;
    while(p.y >= p.x)
    {
        count++;
        p.y -= p.x;
        p.y += 2;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d\n", &n);
    struct pokemon Poke[n + 5];
    int max = 0;
    int sum = 0;
    int index;
    for(int i = 0; i < n; i++)
    {
        gets(Poke[i].name);
        scanf("%d%d\n", &Poke[i].x, &Poke[i].y);
        Poke[i].res = solve(Poke[i]);
        sum += Poke[i].res;
        if(Poke[i].res > max)
        {
            max = Poke[i].res;
            index = i;
        }
    }
    printf("%d\n%s", sum, Poke[index].name);
}