#include <stdio.h>

int main()
{
    int a, u, r, d, c, y; // a= nº digitado; u=unidade do novo numero; r=resto(auxiliar); d=dezena; c=centena do novo numero; y=novo numero
    scanf("%d", &a); // simulacao com a entrada: 123
    c = a%10; // resultado esperado = 3 - no numero digitado corresponde a unidade, no novo numero sera a centena
    r = a/10; // resultado = 123/10 = 12
    d = r%10; // 12/10 - resto = 2
    u = r/10; // 12/10 = 1 - no numero digitado corresponde a centena, no novo numero sera a unidade
    y = u + d*10 + c*100; // 3 + 20 + 100 = 123
    printf("%d\n", y);
    return 0;
}
