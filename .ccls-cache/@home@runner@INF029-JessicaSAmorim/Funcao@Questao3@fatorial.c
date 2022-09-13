#include <stdio.h>
#include <stdlib.h>

float fatorial(float valor){
  
  float i;
  float totalFatorial = 1;
  
	for(i = 1; i <= valor; i ++){
	  if(i != valor)	
		printf("%2.f *", i);
	  else{
	   	printf("%2.f", i);	
        }
		totalFatorial = totalFatorial * i;
	}	
  return totalFatorial;
}

    int main(){

    float numero; 
    float total = 0;

        printf("Digite um número que deseja calcular o seu fatorial: ");
        scanf("%f", &numero);

        total = fatorial(numero);

        printf("\n O fatorial é: %2.f", total);

        return 0;
    }