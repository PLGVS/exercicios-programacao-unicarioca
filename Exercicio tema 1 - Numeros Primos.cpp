#include <stdio.h>
int entrada_dados ();
int verif_primo (int num);

int main (){
	int num;
	int div;
	num = entrada_dados();
	if (div == 2){
		printf("O numero eh primo!");
	}
	else{
		printf("O numero nao eh primo!");
	}
	return 0;
}
int entrada_dados (){
	int num;
	printf("Insira um numero:");
	scanf("%d", &num);
	return num;
}
int verif_primo(int num){
	int i, div;
	for (i=1; i<=num; i++){
		if (num%i == 0){
			div++;
		}
	}
	return div;
}
