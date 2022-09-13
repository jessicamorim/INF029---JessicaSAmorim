#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int valorUm, int valorDois);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeroUm;
    int numeroDois;
    int somaNumeros;
        
        printf("Digite o primeiro número: ");
        scanf("%d", &numeroUm);
        printf("Digite o segundo número: ");
        scanf("%d", &numeroDois);
        
            somaNumeros = soma(numeroUm, numeroDois);
            printf("A soma dos valores é: %d", somaNumeros);
    
    return 0;
}

int soma(int valorUm, int valorDois)
{
    int soma;
    soma = valorUm + valorDois;
    return(soma);
}