#include <stdio.h>
#include <stdlib.h>

// autores: Mario y sebas
  

int main(){
	float t[7];	
	char dias[7][11]={
		"lunes", 
		"martes",
		"miercoles",
		"jueves",
		"viernes",
		"sabado",
		"domingo"
	};
	int p = 0;
	int min = 0, diamin = 0, max = 999, diamax = 999;
	for(int i = 0; i < 7;i++){
		printf("introudce la temperartura : %s\n",dias[i]);
		scanf("%f", &t[i]);

		p += t[i];
		min = t[0];
		if(t[i] < min){
			min = t[i];
			diamin = i;

		}
		printf("la temperatura es en el %s , con %dºC\n", dias[diamin], min);
		printf("la temperatura promedio de la semana es : %d\n", p / 7);

		return 0;

	}
}
