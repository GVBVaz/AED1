#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cel{
    char caractere;
    struct cel *seg;
} celula;

void empilha(char abre, celula *p){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->caractere = abre;
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

    int i, j, N;
    int qtd_diamantes = 0;
    char caracteres[1000];

    scanf("%d", &N);

    for(j=0; j<N; j++){
        i = 0;
        scanf("%s", caracteres);

        while(caracteres[i] != '\0'){
            if(caracteres[i] == '<'){
                empilha(caracteres[i], p);
            }
            else if(caracteres[i] == '>'){
                if(p->seg != NULL){
                    desempilha(p);
                    qtd_diamantes++;
                }
            }
            i++;
        }

        printf("%d\n", qtd_diamantes);
        qtd_diamantes = 0;

        celula *lixo;
        while(p->seg != NULL){
            lixo = p->seg;
            p->seg = lixo->seg;
            free(lixo);
        }
    }
    free(p);
}