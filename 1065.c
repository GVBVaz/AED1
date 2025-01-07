#include <stdio.h>

int main(){
	int i, num, qtd=0;
	
	for(i=0; i<5; i++){
		scanf("%d", &num);
		if(num%2 == 0){
			qtd++;
		}
	}
	
	printf("%d valores pares\n", qtd);
}
