#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
	char nome[50];
	char data_nascimento[30];
	char endereco[30];
	char email[20];
	int rg;
	int cpf;
	int telefone;
}pessoa;
struct Pessoa preencher_dados();
void imprimir_dados(struct Pessoa p);

int main(){	
	struct Pessoa p;
	p = preencher_dados();
	imprimir_dados(p);
	return 0;
}

struct Pessoa preencher_dados(){
	struct Pessoa p;
	strcpy(p.nome, "Pedro Gaspar");
	strcpy(p.data_nascimento, "06 de Janeiro de 2003");
	strcpy(p.endereco, "Rua 2, casa 3");
	strcpy(p.email, "Pedro12345@gmail.com");
	p.rg = 2324545;
	p.cpf = 1777777;
	p.telefone = 23223212;
	return p;
	
}

void imprimir_dados(struct Pessoa p){
	printf("Nome: %s\n", p.nome);
	printf("CPF: %i\n", p.cpf);
	printf("Telefone: %i\n", p.telefone);
	printf("Data de Nascimento: %s\n", p.data_nascimento);
	printf("RG: %i\n", p.rg);
	printf("Telefone: %s\n", p.email);
	printf("Endereco: %s\n", p.endereco);
}
