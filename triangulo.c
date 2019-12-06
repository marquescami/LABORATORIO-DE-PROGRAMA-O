#include <stdio.h>
#include <stdlib.h>

//3 LADOS IGUAIS EQUILATERO RETORN 1
//2 LADOS IGUAIS ISOSCELES RETORN 2
//ELSE RETORNE 3

int processaNumeros(int ladoA, int ladoB, int ladoC, int *menor, int *maior);
int main()
{
    int ladoA, ladoB, ladoC, maior, menor;

    printf("Informe os lados do triangulo: \n");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);

    int retorno = processaNumeros(ladoA, ladoB, ladoC, &maior, &menor);
    printf("Retorno numero: %d", retorno);
    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);

    return 0;
}

int processaNumeros(int ladoA, int ladoB, int ladoC, int *menor, int *maior)
{
    //verifica se eh maior
    if (ladoA > ladoB)
    {
        *maior = ladoA;
    }
    else
    {
        *maior = ladoB;
    }
    if (ladoC > maior)
    {
        *maior = ladoC;
    }

    if (ladoA < ladoB)
    {
        *menor = ladoA;
    }
    else
    {
        *menor = ladoB;
    }
    if (ladoC < menor)
    {
        *menor = ladoC;
    }

    if (ladoA == ladoB && ladoA == ladoC)
    {
        return 1;
    }
    else if ((ladoA == ladoB) || (ladoA == ladoC) || (ladoB == ladoC))
    {
        return 2;
    }

    else
    {
        return 3;
    }
}

//verifica se eh menor
