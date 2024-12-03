#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Separa(int p, int r, int v[]){
	int c, j, k, t;
	c = v[r]; j = p;
	for(k = p; k < r; k++){
		if(v[k] <= c){
			t = v[j], v[j] = v[k], v[k] = t;
			j++;
		}
	}
	v[r] = v[j], v[j] = c;
	return j;
}

void Quicksort(int p, int r, int v[]){
	int j;
	if(p < r){
		j = Separa(p, r, v);
		Quicksort(p, j-1, v);
		Quicksort(j+1, r, v);
	}
}

int main(){
	clock_t t; //variável para armazenar tempo
	int n, a;
	
	scanf("%d", &n);
	int vetor[n];
	
	//semente de aleatoriedade
	srand((unsigned)time(NULL));
	
	//geração aleatória dos valores do vetor
	for(a = 0; a < n; a++){
		vetor[a] = rand() % n;
	}
	
	//verificando tempo de execução do QuickSort
	t = clock();
	Quicksort(0, n-1, vetor);
	t = clock() - t;
	
	//imprime o tempo na tela
	printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000)));
}
