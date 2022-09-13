#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

  typedef struct{
	int dia, mes, ano;
	}dataNascimento;
	
	typedef struct{
	dataNascimento dataNascimento;
	char nome[100], sexo, cpf[11];
	}CadastrarCliente;

	void imprimirCliente(CadastrarCliente cliente){
	printf("\tNome.: %s", cliente.nome);
	printf("\tSexo.: %c", cliente.sexo);
	printf("\tCPF.: %s", cliente.cpf);
	printf("\tData de Nascimento.: %d/%d/%d\n", cliente.dataNascimento.dia, cliente.dataNascimento.mes, cliente.dataNascimento.ano);
	}
	
	CadastrarCliente cadastrarCliente(){
	    CadastrarCliente cliente;
	        
	        printf("Digite seu nome: ");
	        fgets(cliente.nome, 100, stdin);
	        
	        // validar nome 
	        while(strlen(cliente.nome) > 20){
                printf("NOME INVÁLIDO \n\n");
                printf("Digite seu nome: ");
 	            fgets(cliente.nome, 20, stdin);
            }
	        
	        printf("Digite seu CPF: ");
 	        fgets(cliente.cpf, 11, stdin);
 	        
 	         //validar cpf
            while(strlen(cliente.cpf) > 11){
                printf("CPF INVÁLIDO \n\n");
                printf("Digite seu CPF: ");
 	            fgets(cliente.cpf, 11, stdin);
            }
            
            printf("Digite seu sexo: \n Exemplo: f ou F para feminino m ou M para masculino o ou O para outro: \n");
	        scanf("%c", &cliente.sexo);
	        
	         //validar sexo
	        while(cliente.sexo != 'f' || cliente.sexo != 'F' || cliente.sexo != 'm' || cliente.sexo != 'M' || 
                cliente.sexo != 'o' || cliente.sexo != 'O'){
	                printf("SEXO INVÁLIDO \n\n");
	                printf("Digite seu sexo: \n Exemplo: f ou F para feminino m ou M para masculino o ou O para outro: \n");
	                scanf("%c", &cliente.sexo);
            }
            
            printf("Digite sua data de nascimento no formato dd mm aaaa: ");
	        scanf("%d%d%d", &cliente.dataNascimento.dia, &cliente.dataNascimento.mes, &cliente.dataNascimento.ano);
	        
	        //validar data de nascimento
	        while(cliente.dataNascimento.dia < 1 && cliente.dataNascimento.dia > 31 || cliente.dataNascimento.mes < 1 &&
	        cliente.dataNascimento.mes > 12 || cliente.dataNascimento.ano < 1900 && cliente.dataNascimento.ano > 3000){
	            printf("DATA DE NASCIMENTO INVÁLIDO \n\n");
	            printf("Digite sua data de nascimento no formato dd mm aaaa: ");
	            scanf("%d%d%d", &cliente.dataNascimento.dia, &cliente.dataNascimento.mes, &cliente.dataNascimento.ano);
	        }
	
	return cliente;
	}

	int main(){
	setlocale(LC_ALL, "Portuguese");
	
	CadastrarCliente cadastrar;
	cadastrar = cadastrarCliente();
	imprimirCliente(cadastrar);
	return 0;
	}