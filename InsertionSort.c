#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion(int n, int v[]){
	int i, j, x;
	for(j = 1; j < n; j++){
		x = v[j];
		for(i = j-1; i >= 0 && v[i] > x; i--){
			v[i+1] = v[i];
		}
		v[i+1] = x;
	}
}

int main(){
	clock_t t; //vari�vel para armazenar tempo
	int n, a;
	
	scanf("%d", &n);
	int vetor[n];
	
	//semente de aleatoriedade
	srand((unsigned)time(NULL));
	
	//gera��o aleat�ria dos valores do vetor
	for(a = 0; a < n; a++){
		vetor[a] = rand() % n;
	}
	
	//verificando tempo de execu��o do InsertionSort
	t = clock();
	insertion(n, vetor);
	t = clock() - t;
	
	//imprime o tempo na tela
	printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000)));
}
