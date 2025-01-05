#include <stdio.h>

int main(){
	float atual, novo, reajuste;
	
	scanf("%f", &atual);
	
	if(0<=atual && atual<=400.00){
		novo = atual + (0.15 * atual);
		reajuste = 0.15 * atual;
		printf("Novo salario: %.2f\n", novo);
		printf("Reajuste ganho: %.2f\n", reajuste);
		printf("Em percentual: 15 %%\n");
	}
	else if(400.01<=atual && atual<=800.00){
		novo = atual + (0.12 * atual);
		reajuste = 0.12 * atual;
		printf("Novo salario: %.2f\n", novo);
		printf("Reajuste ganho: %.2f\n", reajuste);
		printf("Em percentual: 12 %%\n");
	}
	else if(800.01<=atual && atual<=1200.00){
		novo = atual + (0.10 * atual);
		reajuste = 0.10 * atual;
		printf("Novo salario: %.2f\n", novo);
		printf("Reajuste ganho: %.2f\n", reajuste);
		printf("Em percentual: 10 %%\n");
	}
	else if(1200.01<=atual && atual<=2000.00){
		novo = atual + (0.07 * atual);
		reajuste = 0.07 * atual;
		printf("Novo salario: %.2f\n", novo);
		printf("Reajuste ganho: %.2f\n", reajuste);
		printf("Em percentual: 7 %%\n");
	}
	else if(2000.00<=atual){
		novo = atual + (0.04 * atual);
		reajuste = 0.04 * atual;
		printf("Novo salario: %.2f\n", novo);
		printf("Reajuste ganho: %.2f\n", reajuste);
		printf("Em percentual: 4 %%\n");
	}
}
