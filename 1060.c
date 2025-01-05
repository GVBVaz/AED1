#include <stdio.h>

int main(){
	int i, qtd = 0;
	float num;
	
	for(i=0; i<6; i++){
		scanf("%f", &num);
		if(num > 0){
			qtd++;
		}
	}
	
	printf("%d valores positivos\n", qtd);
}
