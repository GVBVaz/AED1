#include <stdio.h>

int main(){
	int dia1, hora1, min1, seg1, total1;
	int dia2, hora2, min2, seg2, total2;
	int dias, horas, minutos, segundos, total;
	
	scanf("Dia %d", &dia1);
	scanf("%d : %d : %d\n", &hora1, &min1, &seg1);
	scanf("Dia %d", &dia2);
	scanf("%d : %d : %d", &hora2, &min2, &seg2);
	
	total1 = (hora1 * 3600) + (min1 * 60) + seg1;
	total2 = (hora2 * 3600) + (min2 * 60) + seg2;
	
	if(total1 > total2){
		dias = dia2 - dia1 - 1;
		total = 86400 - total1 + total2;
	}
	else{
		dias = dia2 - dia1;
		total = total2 - total1;
	}
	horas = total / 3600;
	total -= horas * 3600;
	minutos = total / 60;
	total -= minutos * 60;
	segundos = total;
	
	printf("%d dia(s)\n", dias);
	printf("%d hora(s)\n", horas);
	printf("%d minuto(s)\n", minutos);
	printf("%d segundo(s)\n", segundos);
}
