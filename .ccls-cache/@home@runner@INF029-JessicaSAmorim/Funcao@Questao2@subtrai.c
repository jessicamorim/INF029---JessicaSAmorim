#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int subtrai(int valorUm, int valorDois, int valorTres);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeroUm;
    int numeroDois;
    int numeroTres;
    int subtraiNumeros;
        
        printf("Digite o primeiro número: ");
        scanf("%d", &numeroUm);
        printf("Digite o segundo número: ");
        scanf("%d", &numeroDois);
        printf("Digite o terceiro número: ");
        scanf("%d", &numeroTres);
        
            subtraiNumeros = subtrai(numeroUm, numeroDois, numeroTres);
            printf("O resultado da subtração é: %d", subtraiNumeros);
    
    return 0;
}

int subtrai(int valorUm, int valorDois, int valorTres)
{
    int subtrai;
    subtrai = (valorUm - valorDois - valorTres);
    return(subtrai);
}