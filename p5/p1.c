#include <stdio.h>
#include <stdlib.h>

// autores: Mario y sebas


int main(){
	#define DIAS_SEMANA 7 //Declaramos una constante que contenga el número de días que hay en una semana. Esto nos ayuda a programar un código más dinámico.

	float t[DIAS_SEMANA];	//Declaramos un string t(temperatura, en este caso promedio) que contenga las temperaturas de los días de la semana.
	char dias[DIAS_SEMANA][11]={ // Declaramos un string dias con los días de la semana, de lunes a domingo, reservando espacio para 7 objetos y 11 espacios de memoria.
		"lunes", 
		"martes",
		"miercoles",
		"jueves",
		"viernes",
		"sabado",
		"domingo"
	};
	float p = 0, min = 999, max = -999; //Declaramos floats p(promedio), min(mínimo) y max(máximo) para contener los valores del promedia y la temperatura mínima y máxima.
	int diaMin = 0, diaMax = 0, diaSup = 0; //Declaramos como enteros las posiciones del día de temperatura máxima y mínima.


	for(int i = 0; i < DIAS_SEMANA;i++){ //Creamos un for en el declaramos un entero i con 0 de valor inicial. Exigimos que cuando i sea menor que el número de días de la semana(7) se sume uno al valor de i para repitir el bucle de una en una vez. 
		printf("Introudce la temperatura del %s: ",dias[i]);
		scanf("%f", &t[i]);
		//Tomamos la temperatura promedio de cada día

		p += t[i];
		//almacenamos la suma de todas las temperaturas en la variable p(promedio).

		if(t[i] < min){ //si la temperatura introducida en el día i de la semana es menor q la variable min(minimo)... min vale 999, lo que significa que cualquier valor por debajo de 999 será menor que min, y como estamos trabajando con temperaturas, cualquiera será menor. Con esto conseguimos q min pase de valer 999 a el valor de la primera iteración del for, tras haber introducido un valor para la primera temperatura..
			min = t[i]; //la variable min pasará a ser el valor de la temperatura del día i
			diaMin = i; //la variable diaMin (día de temperatura mínima) pasará a valer la posición del día i
		}
		if(t[i] > max){ //aquí es lo mismo pero con máximos. cualquier valor será mayor q -999. 
				//max = t[i];
			diaMax = i;
		}
	}

	for(int i = 0; i < DIAS_SEMANA; i++){ //Creamos un for adicional ya que la operación del if que se debe realizar varias veces debe hacerse fuera del for inicial, cuando ya está calculado el promedio.
		if(p / DIAS_SEMANA < t[i]){
			diaSup++;
		}
	}

	//Imprimimos los valores 
	printf("Temperatura promedio de la semana: %.2fºC\n", p / DIAS_SEMANA);
	printf("Temperatura mínima: %.0fºC el día %s.\n", min, dias[diaMin]);
	printf("Temperatura máxima: %.0fºC el día %s.\n", max, dias[diaMax]);
	printf("Número de días con temperaturas superiores al promedio: %d.\n", diaSup);
	printf("Días con temperaturas por debajo del promedio:\n");
	//Creamos un for que imprima cada uno de los días que están por debajo del promedio siguiendo una estructura parecida. 
	for(){
		printf("	%s: %0.fºC\n", );
	}

	return 0;
}
