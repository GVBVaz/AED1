#include <stdio.h>

int main(){
	int inicio, fim, duracao;
	
	scanf("%d %d", &inicio, &fim);
	
	if(inicio == fim){
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	else if(fim > inicio){
		duracao = fim - inicio;
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
	else if(inicio > fim){
		duracao = 24 - inicio + fim;
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
}
