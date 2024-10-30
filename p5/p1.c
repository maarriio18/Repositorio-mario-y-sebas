#include <stdio.h>
#include <stdlib.h>

// autores: Mario y sebas


int main(){
	#define DIAS_SEMANA 7

	float t[DIAS_SEMANA];	
	char dias[DIAS_SEMANA][11]={
		"lunes", 
		"martes",
		"miercoles",
		"jueves",
		"viernes",
		"sabado",
		"domingo"
	};
	float p = 0, min = 999, max = -999;
	int diaMin = 0, diaMax = 0;


	for(int i = 0; i < DIAS_SEMANA;i++){
		printf("Introudce la temperatura del %s: ",dias[i]);
		scanf("%f", &t[i]);
		//Tomamos la temperatura promedio de cada día

		p += t[i];

		if(t[i] < min){
			min = t[i];
			diaMin = i;
		}
		if(t[i] > max){
			max = t[i];
			diaMax = i;
		}
	}

	printf("La temperatura mínima es en el %s, con %fºC\n", dias[diaMin], min);
	printf("La temperatura máxima es en el %s, con %fºC\n", dias[diaMax], max);
	printf("La temperatura promedio de la semana es : %.2fºC\n", p / DIAS_SEMANA);

	return 0;
}
