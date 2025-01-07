#include <stdio.h>

int main(){
	float num, total=0, media;
	int i, qtd;
	
	for(i=0; i<6; i++){
		scanf("%f", &num);
		if(num > 0){
			qtd++;
			total+=num;
		}
	}
	media = total / qtd;
	
	printf("%d valores positivos\n", qtd);
	printf("%.1f\n", media);
}
