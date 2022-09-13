#include <stdio.h>
#include <stdlib.h>
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
	printf("Digite seu CPF ");
 	fgets(cliente.cpf, 11, stdin);
	printf("Digite f ou m para o sexo: ");
	scanf("%c", &cliente.sexo);
	printf("Digite sua data de nascimento no formato dd mm aaaa: ");
	scanf("%d%d%d", &cliente.dataNascimento.dia, &cliente.dataNascimento.mes, &cliente.dataNascimento.ano);

	return cliente;
	}

	int main(){
	setlocale(LC_ALL, "Portuguese");
	
	CadastrarCliente cadastrar;
	cadastrar = cadastrarCliente();
	imprimirCliente(cadastrar);
	return 0;
	}