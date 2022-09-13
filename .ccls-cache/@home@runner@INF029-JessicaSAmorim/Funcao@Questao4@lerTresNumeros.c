#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//vetor
int lerTresNumeros(int valorUm, int valorDois, int valorTres);


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeroUm;
    int numeroDois;
    int numeroTres;
    
            lerTresNumeros(numeroUm, numeroDois, numeroTres);
            printf("O primeiro número é: %d - O segundo número é: %d - "  
            "O terceiro número é: %d", numeroUm, numeroDois, numeroTres);
    return 0;
}

int lerTresNumeros(int valorUm, int valorDois, int valorTres)
{
    printf("Digite o primeiro número: ");
    scanf("%d", &valorUm);
    printf("Digite o segundo número: ");
    scanf("%d", &valorDois);
    printf("Digite o terceiro número: ");
    scanf("%d", &valorTres);
        
        return(valorUm, valorDois, valorTres);
}