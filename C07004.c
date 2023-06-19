#include <stdio.h>

long long LCD(long long x, long long y)
{
    while(x * y != 0)
    {
        if(x > y) x %= y;
        else y %= x;
    }
    return x + y;
}

long long GCD(long long x, long long y)
{
    long long res = x * y;
    long long k = LCD(x, y);
    return res/k;
}

void rutGon(long long* a, long long* b)
{
    long long k = LCD(*a, *b);
    *a /= k;
    *b /= k;
}

void tong(long long a, long long b, long long c, long long d)
{
    long long tu = a * d + b * c;
    long long mau = b * d;
    rutGon(&tu, &mau);
    printf("%lld/%lld\n", tu, mau);
}

void thuong(long long a, long long b, long long c, long long d)
{
    long long tu = a * d;
    long long mau = b * c;
    rutGon(&tu, &mau);
    printf("%lld/%lld\n", tu, mau);
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        printf("Case #%d:\n", i);
        long long a, b, c, d;
        scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
        rutGon(&a, &b);
        rutGon(&c, &d);
       	long long k = GCD(b, d);
        long long k1 = k / b;
        long long k2 = k / d;
        printf("%lld/%lld %lld/%lld\n", k1 * a, k, k2 * c, k);
        tong(a, b, c, d);
        thuong(a, b, c, d);
    }
}