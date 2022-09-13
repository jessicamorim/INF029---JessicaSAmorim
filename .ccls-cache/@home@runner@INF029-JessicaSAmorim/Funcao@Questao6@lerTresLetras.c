#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


char lerTresLetras(char primeiraLetra, char segundaLetra, char terceiraLetra);


int main()
{
    setlocale(LC_ALL, "Portuguese");
    char letraUm;
    char letraDois;
    char letraTres;
   
            lerTresLetras(letraUm, letraDois, letraTres);
            printf("A primeiro letra é: %c - A segundo letra é: %c - "  
            "A terceira letra é: %c ", letraUm, letraDois, letraTres);
    return 0;
}

char lerTresLetras(char primeiraLetra, char segundaLetra, char terceiraLetra)
{
    printf("Digite a primeira letra: ");
    scanf(" %c", &primeiraLetra);
    printf("Digite a segunda letra: ");
    scanf(" %c", &segundaLetra);
    printf("Digite a terceiro letra: ");
    scanf(" %c", &terceiraLetra);
        
        return(primeiraLetra, segundaLetra, terceiraLetra);
}