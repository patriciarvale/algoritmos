#include <stdio.h>

int main()
{
    int h, c, f, r, m;
    double total;
    scanf("%d %d %d %d %d", &h, &c, &f, &r, &m);
    total = h*3 + c*2.5 + f*2.50 + r + m*3;
    printf("Conta final: %.2lf\n", total);
    return 0;
}
