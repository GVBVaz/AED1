#include <stdio.h>

int main(){
	int i, X;
	
	scanf("%d", &X);
	
	if(X%2 != 0){
		printf("%d\n", X);
	}
	else{
		X++;
		printf("%d\n", X);
	}
	
	for(i=0; i<5; i++){
		X += 2;
		printf("%d\n", X);
	}
}
