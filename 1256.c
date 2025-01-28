#include <stdio.h>

int main(){
	int N, M, C, i, j, k;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		scanf("%d %d", &M, &C);
		int chaves[C];
		for(j=0; j<C; j++){
			scanf("%d", &chaves[j]);
		}
		for(j=0; j<M; j++){
			printf("%d -> ", j);
			for(k=0; k<C; k++){
				if(chaves[k] % M == j){
					printf("%d -> ", chaves[k]);
				}
			}
			printf("\\\n");
		}
		if(i != N-1){
			printf("\n");
		}
	}
}
