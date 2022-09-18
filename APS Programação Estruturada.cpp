#include <stdio.h>
#include <stdlib.h>
#define N 10
void gerar_valores(int x[]);
void imprimir_dados(int x[]);
int somar_pares_recursivo(int q, int x[]);
int teste_par(int num);

int main(){
	int vetor[N];
	int soma_par;
	gerar_valores(vetor);
	imprimir_dados(vetor);
	soma_par=somar_pares_recursivo(N-1, vetor);
	printf("\nA soma dos pares eh: %i\n", soma_par);
	return 0;
	
}

void gerar_valores(int x[]){
	int i, n;
	time_t t;
	n=5;
	srand((unsigned)time(&t));
	for (i=0;i<N;i++){
		x[i]=(int)rand() % 10;
	}
}

void imprimir_dados(int x[]){
	int i;
	for (i=0;i<N;i++){
		printf("\nvetor[%i] = %i", i, x[i]);
	}
}

int somar_pares_recursivo(int q, int x[]){
	int r;
	
	if (q==0){
		return teste_par(x[0])?x[0]:0;
	}
	
	r = teste_par(x[q])?x[q]:0;
	
		return r+somar_pares_recursivo(q-1, x);
}

int teste_par(int num){
	if (num%2==0){
		return 1;
	}
	return 0;
}
