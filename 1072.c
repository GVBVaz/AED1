#include <stdio.h>

int main(){
    int N, X, i;
    int in = 0, out = 0;

    scanf("%d", &N);

    for(i=0; i<N; i++){
        scanf("%d", &X);
        if(10<=X && X<=20){
            in++;
        }
        else{
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
}