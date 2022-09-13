#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//struct
int lerQuatroNumeros(int valorUm, int valorDois, int valorTres, int valorQuatro);


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeroUm;
    int numeroDois;
    int numeroTres;
    int numeroQuatro;
    
            lerQuatroNumeros(numeroUm, numeroDois, numeroTres, numeroQuatro);
            printf("O primeiro número é: %d - O segundo número é: %d - "  
            "O terceiro número é: %d - O quarto número é: %d", numeroUm, numeroDois, numeroTres, numeroQuatro);
    return 0;
}

int lerQuatroNumeros(int valorUm, int valorDois, int valorTres, int valorQuatro)
{
    printf("Digite o primeiro número: ");
    scanf("%d", &valorUm);
    printf("Digite o segundo número: ");
    scanf("%d", &valorDois);
    printf("Digite o terceiro número: ");
    scanf("%d", &valorTres);
    printf("Digite o quarto número: ");
    scanf("%d", &valorQuatro);
    
        
        return(valorUm, valorDois, valorTres, valorQuatro);
}