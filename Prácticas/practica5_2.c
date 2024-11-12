#include <stdio.h>
#include <stdlib.h>
#define NOTA_MINIMA 5

int main(){

	double notas[100], suma = 0, promedio, max = 0, min = 100;
	int cantidad, aprobados = 0, suspensos = 0, posicionEstudiante, posicionEstudianteMin, posicionEstudianteMax;

	printf("Introduce el número de alumnos: ");
	scanf("%d", &cantidad);
	for(int i = 0; i < cantidad; i++){
		printf("Introduce la nota del alumno %d: ", i + 1);
		scanf("%lf", &notas[i]);
		suma += notas[i];

		if (notas[i] >= NOTA_MINIMA){
			aprobados += 1;
		} else {
			suspensos += 1;
		}
		if (notas[i] > max){
			max = notas[i];
			posicionEstudianteMax = i + 1;
		}
		if (notas[i] < min){
			min = notas[i];
			posicionEstudianteMin = i + 1;
		}
	}


	promedio = suma / cantidad;
	printf("El promedio es: %.2f\n", promedio);
        printf("Número de estudiantes aprobados: %d\n", aprobados);
	printf("Número de estudiantes suspensos: %d\n", suspensos);
	printf("Nota máxima: %0.2f (Estudiante en la posición %d) \n", max, posicionEstudianteMax);
	printf("Nota mínima: %0.2f (Estudiante en la posición %d) \n", min, posicionEstudianteMin);
	printf("Notas por encima del promedio:\n");
	for (int i = 0; i < cantidad; i++){
		if (notas[i] >= promedio){
			posicionEstudiante = i +1;
			printf("Estudiante en la posición %d: %0.2f\n", posicionEstudiante, notas[i]);
		}
	}

	return 0;

}
