#include <stdio.h>

int main(){
	float salario, imposto;
	
	scanf("%f", &salario);
	
	if(0.00<=salario && salario<=2000.00){
		printf("Isento\n");
	}
	else if(2000.01<=salario && salario<= 3000.00){
		imposto = 0.08 * (salario - 2000.00);
		printf("R$ %.2f\n", imposto);
	}
	else if(3000.01<=salario && salario<=4500.00){
		imposto = 80.00 + (0.18 * (salario - 3000.00));
		printf("R$ %.2f\n", imposto);
	}
	else if(4500.00<salario){
		imposto = 350.00 + (0.28 * (salario - 4500.00));
		printf("R$ %.2f\n", imposto);
	}
}
