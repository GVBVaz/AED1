#include <stdio.h>

int main(){
    int X, Y, menor, maior, i;
    int soma = 0;

    scanf("%d", &X);
    scanf("%d", &Y);

    if(X <= Y){
        menor = X;
        maior = Y;
    }
    else{
        menor = Y;
        maior = X;
    }

    for(i=menor+1; i<maior; i++){
        if(i%2 != 0){
            soma += i;
        }
    }
    printf("%d\n", soma);
}