#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


char lerTresPalavras(char primeiraPalavra[], char segundaPalavra[], char terceiraPalavra[]);


int main()
{
    setlocale(LC_ALL, "Portuguese");
    char PalavraUm[20];
    char PalavraDois[20];
    char PalavraTres[20];
   
            lerTresPalavras(PalavraUm, PalavraDois, PalavraTres);
            printf("A primeiro palavra é: %s - A segundo palavra é: %s - "  
            "A terceira palavra é: %s ", PalavraUm, PalavraDois, PalavraTres);
    return 0;
}

char lerTresPalavras(char primeiraPalavra[], char segundaPalavra[], char terceiraPalavra[])
{
    printf("Digite a primeira palavra: ");
    fgets(primeiraPalavra, 20, stdin);
    printf("Digite a segunda palavra: ");
    fgets(segundaPalavra, 20, stdin);
    printf("Digite a terceiro palavra: ");
    fgets(terceiraPalavra, 20, stdin);
        
        return(primeiraPalavra, segundaPalavra, terceiraPalavra);
}