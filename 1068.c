#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cel{
	char caractere;
	struct cel *seg;
} celula;

void empilha(char parentese, celula *p){
	celula *nova;
	nova = malloc(sizeof(celula));
	nova->caractere = parentese;
	nova->seg = p->seg;
	p->seg = nova;
}

void desempilha(celula *p){
	celula *q;
	q = p->seg;
	p->seg = q->seg;
	free(q);
}

int main(){
	celula *cabeca = malloc(sizeof(celula));
	celula *p;
	p = cabeca;
	p->seg = NULL;
	
	int i;
	char expressao[1000], resp[10];
	
	while(fgets(expressao, sizeof(expressao), stdin) != NULL){
		i = 0;
		
		while(expressao[i] != '\0'){
			if(expressao[i] == '('){
				empilha(expressao[i], p);
			}
			else if(expressao[i] == ')'){
				if(p->seg == NULL){
					strcpy(resp, "incorrect");
				}
				else{
					desempilha(p);
				}
			}
			i++;
		}
		
		if(strcmp(resp, "incorrect") == 0){
			printf("incorrect\n");
		}
		else{
			if(p->seg == NULL){
				printf("correct\n");
			}
			else{
				printf("incorrect\n");
			}
		}
		strcpy(resp, "");
		
		celula *lixo;
		while(p->seg != NULL){
			lixo = p->seg;
			p->seg = lixo->seg;
			free(lixo);
		}
	}
	free(p);
}
