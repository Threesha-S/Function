#include <stdio.h>

float simpleInterest(int p, int r, int t)
{
    return (p * r * t) / 100.0;
}
int main()
{
    int p, r, t;
    float si;
    scanf("%d %d %d", &p, &r, &t);
    si = simpleInterest(p, r, t);
    printf("%.2f", si);

    return 0;
}