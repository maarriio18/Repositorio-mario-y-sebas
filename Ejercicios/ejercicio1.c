#include <stdio.h>

int main() {
	// Array 5D, continentes, sedes, categorías, modelos, lotes
	int inventario[2][3][4][5][10] = {0}; // Todo vacío al principio

	// Algunos datos de ejemplo
	inventario[0][0][0][0][0] = 50;   // América, sede 0, televisor, modelo 0, lote 0
	inventario[1][1][1][3][2] = 120;  // Europa, sede 1, teléfono, modelo 3, lote 2
	inventario[0][2][2][4][7] = 75;   // América, sede 2, ordenador, modelo 4, lote 7
	inventario[1][0][3][1][4] = 200;  // Europa, sede 0, electrodoméstico, modelo 1, lote 4
	inventario[0][1][0][2][5] = 45;   // América, sede 1, televisor, modelo 2, lote 5

	// Imprimir algunas posiciones específicas
	printf("América, sede 0, categoría Televisores, modelo 0, lote 0: %d unidades\n", inventario[0][0][0][0][0]);
	printf("Europa, sede 1, categoría Teléfonos, modelo 3, lote 2: %d unidades\n", inventario[1][1][1][3][2]);
	printf("América, sede 2, categoría Ordenadores, modelo 4, lote 7: %d unidades\n", inventario[0][2][2][4][7]);
	printf("Europa, sede 0, categoría Electrodomésticos, modelo 1, lote 4: %d unidades\n", inventario[1][0][3][1][4]);
	printf("América, sede 1, categoría Televisores, modelo 2, lote 5: %d unidades\n", inventario[0][1][0][2][5]);

	return 0;
}

