#include <stdio.h>
#include <string.h>

int main(){
	
	int n, k, i, j, a1, a2, a3;
	int cont = 0;
	int sudoku[9][9];
	int auxiliar[9];
	char resp[4] = "SIM";
	
	scanf("%d", &n);
	
	for(k=1; k<=n; k++){
		for(i=0; i<9; i++){
			for(j=0; j<9; j++){
				scanf("%d", &sudoku[i][j]);
			}
		}
		for(i=0; i<9; i++){  //Verifica linhas
			for(j=0; j<9; j++){
				auxiliar[j] = sudoku[i][j];
			}
			for(a1=0; a1<8; a1++){
				for(a2=a1+1; a2<9; a2++){
					if(auxiliar[a1] > auxiliar[a2]){
						auxiliar[a1] = auxiliar[a1] + auxiliar[a2];
						auxiliar[a2] = auxiliar[a1] - auxiliar[a2];
						auxiliar[a1] = auxiliar[a1] - auxiliar[a2];
					}
				}
			}
			for(a3=0; a3<9; a3++){
				if(auxiliar[a3] != a3+1){
					strcpy(resp, "NAO");
				}
			}
		}
		for(j=0; j<9; j++){  //Verifica colunas
			for(i=0; i<9; i++){
				auxiliar[i] = sudoku[i][j];
			}
			for(a1=0; a1<8; a1++){
				for(a2=a1+1; a2<9; a2++){
					if(auxiliar[a1] > auxiliar[a2]){
						auxiliar[a1] = auxiliar[a1] + auxiliar[a2];
						auxiliar[a2] = auxiliar[a1] - auxiliar[a2];
						auxiliar[a1] = auxiliar[a1] - auxiliar[a2];
					}
				}
			}
			for(a3=0; a3<9; a3++){
				if(auxiliar[a3] != a3+1){
					strcpy(resp, "NAO");
				}
			}
		}
		for(i=0; i<3; i++){  //Verifica primeiro quadrado
			for(j=0; j<3; j++){
				auxiliar[cont] = sudoku[i][j];
				cont++;
			}
		}
		cont = 0;
		for(a1=0; a1<8; a1++){
			for(a2=a1+1; a2<9; a2++){
				if(auxiliar[a1] > auxiliar[a2]){
					auxiliar[a1] = auxiliar[a1] + auxiliar[a2];
					auxiliar[a2] = auxiliar[a1] - auxiliar[a2];
					auxiliar[a1] = auxiliar[a1] - auxiliar[a2];
				}
			}
		}
		for(a3=0; a3<9; a3++){
			if(auxiliar[a3] != a3+1){
				strcpy(resp, "NAO");
			}
		}
		for(i=0; i<3; i++){  //Verifica segundo quadrado
			for(j=3; j<6; j++){
				auxiliar[cont] = sudoku[i][j];
				cont++;
			}
		}
		cont = 0;
		for(a1=0; a1<8; a1++){
			for(a2=a1+1; a2<9; a2++){
				if(auxiliar[a1] > auxiliar[a2]){
					auxiliar[a1] = auxiliar[a1] + auxiliar[a2];
					auxiliar[a2] = auxiliar[a1] - auxiliar[a2];
					auxiliar[a1] = auxiliar[a1] - auxiliar[a2];
				}
			}
		}
		for(a3=0; a3<9; a3++){
			if(auxiliar[a3] != a3+1){
				strcpy(resp, "NAO");
			}
		}
		for(i=0; i<3; i++){  //Verifica terceiro quadrado
			for(j=6; j<9; j++){
				auxiliar[cont] = sudoku[i][j];
				cont++;
			}
		}
		cont = 0;
		for(a1=0; a1<8; a1++){
			for(a2=a1+1; a2<9; a2++){
				if(auxiliar[a1] > auxiliar[a2]){
					auxiliar[a1] = auxiliar[a1] + auxiliar[a2];
					auxiliar[a2] = auxiliar[a1] - auxiliar[a2];
					auxiliar[a1] = auxiliar[a1] - auxiliar[a2];
				}
			}
		}
		for(a3=0; a3<9; a3++){
			if(auxiliar[a3] != a3+1){
				strcpy(resp, "NAO");
			}
		}
		for(i=3; i<6; i++){  //Verifica quarto quadrado
			for(j=0; j<3; j++){
				auxiliar[cont] = sudoku[i][j];
				cont++;
			}
		}
		cont = 0;
		for(a1=0; a1<8; a1++){
			for(a2=a1+1; a2<9; a2++){
				if(auxiliar[a1] > auxiliar[a2]){
					auxiliar[a1] = auxiliar[a1] + auxiliar[a2];
					auxiliar[a2] = auxiliar[a1] - auxiliar[a2];
					auxiliar[a1] = auxiliar[a1] - auxiliar[a2];
				}
			}
		}
		for(a3=0; a3<9; a3++){
			if(auxiliar[a3] != a3+1){
				strcpy(resp, "NAO");
			}
		}
		for(i=3; i<6; i++){  //Verifica quinto quadrado
			for(j=3; j<6; j++){
				auxiliar[cont] = sudoku[i][j];
				cont++;
			}
		}
		cont = 0;
		for(a1=0; a1<8; a1++){
			for(a2=a1+1; a2<9; a2++){
				if(auxiliar[a1] > auxiliar[a2]){
					auxiliar[a1] = auxiliar[a1] + auxiliar[a2];
					auxiliar[a2] = auxiliar[a1] - auxiliar[a2];
					auxiliar[a1] = auxiliar[a1] - auxiliar[a2];
				}
			}
		}
		for(a3=0; a3<9; a3++){
			if(auxiliar[a3] != a3+1){
				strcpy(resp, "NAO");
			}
		}
		for(i=3; i<6; i++){  //Verifica sexto quadrado
			for(j=6; j<9; j++){
				auxiliar[cont] = sudoku[i][j];
				cont++;
			}
		}
		cont = 0;
		for(a1=0; a1<8; a1++){
			for(a2=a1+1; a2<9; a2++){
				if(auxiliar[a1] > auxiliar[a2]){
					auxiliar[a1] = auxiliar[a1] + auxiliar[a2];
					auxiliar[a2] = auxiliar[a1] - auxiliar[a2];
					auxiliar[a1] = auxiliar[a1] - auxiliar[a2];
				}
			}
		}
		for(a3=0; a3<9; a3++){
			if(auxiliar[a3] != a3+1){
				strcpy(resp, "NAO");
			}
		}
		for(i=6; i<9; i++){  //Verifica setimo quadrado
			for(j=0; j<3; j++){
				auxiliar[cont] = sudoku[i][j];
				cont++;
			}
		}
		cont = 0;
		for(a1=0; a1<8; a1++){
			for(a2=a1+1; a2<9; a2++){
				if(auxiliar[a1] > auxiliar[a2]){
					auxiliar[a1] = auxiliar[a1] + auxiliar[a2];
					auxiliar[a2] = auxiliar[a1] - auxiliar[a2];
					auxiliar[a1] = auxiliar[a1] - auxiliar[a2];
				}
			}
		}
		for(a3=0; a3<9; a3++){
			if(auxiliar[a3] != a3+1){
				strcpy(resp, "NAO");
			}
		}
		for(i=6; i<9; i++){  //Verifica oitavo quadrado
			for(j=3; j<6; j++){
				auxiliar[cont] = sudoku[i][j];
				cont++;
			}
		}
		cont = 0;
		for(a1=0; a1<8; a1++){
			for(a2=a1+1; a2<9; a2++){
				if(auxiliar[a1] > auxiliar[a2]){
					auxiliar[a1] = auxiliar[a1] + auxiliar[a2];
					auxiliar[a2] = auxiliar[a1] - auxiliar[a2];
					auxiliar[a1] = auxiliar[a1] - auxiliar[a2];
				}
			}
		}
		for(a3=0; a3<9; a3++){
			if(auxiliar[a3] != a3+1){
				strcpy(resp, "NAO");
			}
		}
		for(i=6; i<9; i++){  //Verifica nono quadrado
			for(j=6; j<9; j++){
				auxiliar[cont] = sudoku[i][j];
				cont++;
			}
		}
		cont = 0;
		for(a1=0; a1<8; a1++){
			for(a2=a1+1; a2<9; a2++){
				if(auxiliar[a1] > auxiliar[a2]){
					auxiliar[a1] = auxiliar[a1] + auxiliar[a2];
					auxiliar[a2] = auxiliar[a1] - auxiliar[a2];
					auxiliar[a1] = auxiliar[a1] - auxiliar[a2];
				}
			}
		}
		for(a3=0; a3<9; a3++){
			if(auxiliar[a3] != a3+1){
				strcpy(resp, "NAO");
			}
		}
		printf("Instancia %d\n", k);
		printf("%s\n\n", resp);
		strcpy(resp, "SIM");
	}
}
