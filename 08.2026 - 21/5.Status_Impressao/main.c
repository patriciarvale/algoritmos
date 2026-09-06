#include <stdio.h>

int main()
{
    int I, T, R; // I = Qtde impressa; T = Total de folhas; R = restante
    double P; // P = progresso
    scanf("%d %lf", &I, &P);
    T = I/(P/100);
    R = T-I;
    printf("O documento possui %d paginas\n", T);
    printf("Ja foram impressas %d paginas\n", I);
    printf("Faltam %d paginas\n", R);
    return 0;
}
